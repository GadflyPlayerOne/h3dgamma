#ifndef __DATA_CPP__
#define __DATA_CPP__

#include <stdio.h>
#include "data.h"

#define LENGTH(x) (sizeof(x)/sizeof(x[0]))

#define DEBUG

template <class T>
class DataVector {

    protected:
        Data<T> *head;
        Data<T> *tail;
        void insert(Data<T> *data)
        {

            fprintf(stderr, "Insert called -- %d\n", (signed int) data->value);
            
            Data<T> *clone = tail;
            Data<T> *prev = NULL;
            
            if (head == NULL) {
                head = data;
                tail = data;
#ifdef DEBUG
                fprintf(stderr, "-- Debug Insert -- \n");
                fprintf(stderr, "%d\n", (signed int)head->value);
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
            Data<T> *clone2 = head;
            fprintf(stderr, "-- Debug Insert -- \n");
            while(clone2 != NULL) {
                fprintf(stderr, "%d\n", (signed int) clone2->value);
                clone2 = clone2->next;
            }
#endif   
        }

        bool timeCompare(Data<T>* data, Data<T>* clone) {
            if ( data->timestamp < clone->timestamp) {
                return true;
            } else {
                return false;
            }
        }

    public:
        DataVector() {
            head = NULL;
            tail = NULL;
            fprintf(stderr, "DataVector initialized\n");
        }

        virtual void add(T value, int timestamp){
            fprintf(stderr, "Add called -- %i\n", timestamp);
            Data<T> *data = new Data<T>;
            data->value = value;
            data->timestamp = timestamp;
            data->next = data->prev = NULL;

            this->insert(data);
        }

        virtual Data<T> get(unsigned int timestamp) {
            fprintf(stderr, "Get called -- %i\n", timestamp);

            Data<T> returnValue;

            Data<T> *clone = tail;
            Data<T> *prev = NULL;
            if (timestamp > clone->timestamp) {
                // RETURN NOT FOUND DATA
                returnValue.timestamp = 0;
            } else {
                while((clone != NULL) && clone->timestamp > timestamp) {
                    prev = clone;
                    clone = clone->prev;
                }

                T y1 = clone == NULL ? 0 :clone->value;
                T y2 = prev->value;

                unsigned int x1 = clone == NULL ? 0 : clone->timestamp;
                unsigned int x2 = prev->timestamp;

                // Hard-coded formula for interpolation
                double y = (double) ((double)(((double) y2 - (double) y1) * (((double) timestamp - (double) x1)) / ((double) ((double) x2 - (double) x1)))) + (double) y1;

                fprintf(stderr, "Get Value -- %f\n", y);

                returnValue.timestamp = timestamp;
                returnValue.value = (T) y;
            }
            

            return returnValue;
        }
};

#endif