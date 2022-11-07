#ifndef __COMPLEXDATA_CPP__
#define __COMPLEXDATA_CPP__

#include <stdio.h>
#include <stdlib.h>

#include "complexData.h"
#include "data.h"

template <class T>
class ComplexVector {

    protected:
        int m = -1;
        Data<T *> *head;
        Data<T *> *tail;

        void insert(Data<T *> *data)
        {

            fprintf(stderr, "Insert called -- ");
            
            Data<T *> *clone = tail;
            Data<T *> *prev = NULL;

            int i;

            if (head == NULL)
            {
                head = data;
                tail = data;
#ifdef DEBUG
                fprintf(stderr, "-- Debug Insert -- \n");
                for (i = 0; i<m;i++)
                    fprintf(stderr, "%d ", (int) data->value[i]);
                fprintf(stderr, "\n");
#endif
                return;
            }

            if(!timeCompare(data, clone)) {
                clone->next = data;
                data->prev = clone;
                data->next = NULL;
                tail = data;
            } else {
                while ((clone != NULL) && (timeCompare(data, clone))) {
                    prev = clone;
                    clone = clone->prev;
                }

                if (clone == NULL) {
                    prev->prev = data;
                    data->next = prev;
                    head = data;
                } else {
                    clone->next = data;
                    data->prev = clone;
                    data->next = prev;
                    if (prev != NULL) {
                        prev->prev = data;
                    }
                }
            }

#ifdef DEBUG
            Data<T *> *clone2 = head;
            while(clone2 != NULL) {
                for (i = 0; i<m;i++)
                    fprintf(stderr, "%d ", (int) clone2->value[i]);
                fprintf(stderr, "\n");
                clone2 = clone2->next;
            }
#endif   
        }

        bool timeCompare(Data<T *>* data, Data<T *>* clone) {
            if ( data->timestamp < clone->timestamp) {
                return true;
            } else {
                return false;
            }
        }

    public:
        void setM(int em) {
            m = em;
        }

        bool initialized() {
            return m > 0;
        }

        ComplexVector() {
            head = NULL;
            tail = NULL;
            fprintf(stderr, "ComplexVector initialized\n");
        }

        Data<T *> get(unsigned int timestamp) {
            fprintf(stderr, "Complex Get called -- %i\n", timestamp);

            Data<T *> returnValue;

            returnValue.value = (T *)malloc(sizeof(T) * m);

            Data<T *> *clone = tail;
            Data<T *> *prev = NULL;

            int i;
            if (timestamp > clone->timestamp) {
                // RETURN NOT FOUND DATA
                returnValue.timestamp = 0;
                for (i = 0; i<m;i++) {
                    returnValue.value[i] = 0;
                }
            } else {
                while((clone != NULL) && clone->timestamp > timestamp) {
                    prev = clone;
                    clone = clone->prev;
                }

                T * y1 = (T *) malloc(sizeof(T) * m);
                for (i = 0; i < m;i++) {
                    y1[i] = clone != NULL ? clone->value[i] : 0;
                }

                T * y2 = (T *) malloc(sizeof(T) * m);
                for (i = 0; i<m;i++) {
                    y2[i] = prev != NULL ? prev->value[i] : 0;
                }

                unsigned int x1 = clone == NULL ? 0 : clone->timestamp;
                unsigned int x2 = prev->timestamp;

                // Hard-coded formula for interpolation
                T * y = (T *) malloc(sizeof(T)*m);

                for (i = 0; i < m;i++) {
                    y[i] = (double)((double)(((double)y2[i] - (double)y1[i]) * (((double)timestamp - (double)x1)) / ((double)((double)x2 - (double)x1)))) + (double)y1[i];
                }

                fprintf(stderr, "Complex Get Value -- ");
                for (i = 0; i<m;i++)
                    fprintf(stderr, "%f ", y[i]);
                fprintf(stderr, "\n");

                returnValue.timestamp = timestamp;
                for (i = 0; i<m;i++) 
                    returnValue.value[i] = y[i];
                
            }

            return returnValue;
        }

        void add(T * value, int timestamp) {
            fprintf(stderr, "Complex Add called -- %i\n", timestamp);

            fprintf(stderr, "Complex Data -- %f, %f, %f\n", value[0], value[1], value[2]);
            Data<T *> *data = new Data<T *>;
            data->value = (T *)malloc(sizeof(T) * m);

            int i;
            for (i = 0; i < m; i++) {
                data->value[i] = value[i];
            }
                
            data->timestamp = timestamp;
            data->next = data->prev = NULL;

            this->insert(data);
        }


};

#endif