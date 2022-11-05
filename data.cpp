#ifndef __DATA_CPP__
#define __DATA_CPP__

#include <stdio.h>
#include "data.h"

#define DEBUG

template <class T>
class DataVector {

    private:
        Data<T> *head;
        void insert(Data<T> *data) {

            fprintf(stderr, "Insert called -- %d\n", (signed int) data->value);
            
            Data<T> *clone = head;
            Data<T> *prev = NULL;
            
            if (head == NULL)
            {
                head = data;
#ifdef DEBUG
            fprintf(stderr, "-- Debug Insert -- \n");
            fprintf(stderr, "%d\n", (signed int) head->value);
#endif
                return;
            } else if(data->value < head->value) {
                head->prev = data;
                data->next = head;
                head = data;
            } else {
                while((clone != NULL) && (clone->value <= data->value)) {
                    prev = clone;
                    clone = clone->next;
                }

                data->prev = prev;
                data->next = clone;

                
                if(clone != NULL) {
                    clone->prev = data;
                }

                if(prev != NULL) {
                    prev->next = data;
                }
            }
#ifdef DEBUG
            clone = head;
            fprintf(stderr, "-- Debug Insert -- \n");
            while(clone != NULL) {
                fprintf(stderr, "%d\n", (signed int) clone->value);
                clone = clone->next;
            }
#endif
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