#ifndef __DATA_H__
#define __DATA_H__

template <class T>
class Datum{
    T data;
    int timestamp;
};

template <typename T>
struct Data {
    Datum<T> data;
    int timestamp;
    Data *prev;
    Data *next;
};

#include "data.cpp"

#endif