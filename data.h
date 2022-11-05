#ifndef __DATA_H__
#define __DATA_H__

template <typename T>
struct Data {
    T value;
    int timestamp;
    Data *prev;
    Data *next;
};

#include "data.cpp"

#endif