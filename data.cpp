#ifndef __DATA_CPP__
#define __DATA_CPP__

#include <stdio.h>
#include "data.h"

template <class T>
class DataVector {

    private:
        Data<T> *head;

    protected:

    public:
        DataVector() {
            head = NULL;
            fprintf(stderr, "DataVector initialized\n");
        }

        virtual void add(T value, int timestamp){
            fprintf(stderr, "add called - %i\n", timestamp);
        }
};

#endif