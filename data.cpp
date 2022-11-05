#ifndef __DATA_CPP__
#define __DATA_CPP__

#include <stdio.h>
#include "data.h"

#define DEBUG

template <class T>
class DataVector {

    private:
        Data<T> *head;
        Data<T> *tail;
        void insert(Data<T> *data)
        {

            fprintf(stderr, "Insert called -- %d\n", (signed int) data->value);
            
            Data<T> *clone = tail;
            Data<T> *prev = NULL;
            
            if (head == NULL)
            {
                head = data;
                tail = data;
#ifdef DEBUG
                fprintf(stderr, "-- Debug Insert -- \n");
                fprintf(stderr, "%d\n", (signed int)head->value);
#endif
                return;
            } 
            
            if(!compare(data, clone)) {
                clone->next = data;
                data->prev = clone;
                data->next = NULL;
                tail = data;
                fprintf(stderr, "foo\n");
            }
            else
            {
                while((clone != NULL) && (compare(data, clone))) {
                    prev = clone;
                    clone = clone->next;
                }

                 data->next = prev;
                data->prev = clone;

                
                if(clone != NULL) {
                    clone->next = data;
                }

                if(prev != NULL) {
                    prev->prev = data;
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

        virtual bool compare(Data<T>* a, Data<T>* b) {
            if ( a->timestamp > b->timestamp) {
                return false;
            } else {
                return true;
            }
        }

    protected:

    public:
        DataVector() {
            head = NULL;
            fprintf(stderr, "DataVector initialized\n");
        }

        void add(T value, int timestamp){
            fprintf(stderr, "Add called -- %i\n", timestamp);

            fprintf(stderr, "Data -- %x\n", (unsigned int) value);
            Data<T> *data = new Data<T>;
            data->value = value;
            data->timestamp = timestamp;
            data->next = data->prev = NULL;

            this->insert(data);
        }
};

#endif