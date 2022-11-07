#include <stdio.h>
#include <time.h>
#include <cstdlib>

#include "data.h"
#include "macros.h"

using namespace std;

#define DEBUG
#define RAND_INT ((unsigned int) rand() % 100)
#define RAND_FLOAT ((float)((((float) (rand() % 100)) / ((float) (rand() % 100))) * 100.0))

int main() {

    fprintf(stderr, "hello world.\n");

    DataVector<int> vector_int;
    DataVector<float> vector_float;
    DataVector<unsigned int> vector_unsigned_int;

    srand(time(NULL));

    int i;
    for (i = 0; i < 5; i++) {
        fprintf(stderr, "\n%i -- Int \n", i);
        vector_int.add(RAND_INT, time(0));
        delay(1325);
    }

    vector_int.get(time(0) - 5);

    for (i = 0; i < 5; i++) {
        fprintf(stderr, "\n%i -- Float \n", i + 5);
        vector_float.add(RAND_FLOAT, time(0));
        delay(1325);
    }

    vector_float.get(time(0) - 5);

    for (i = 0; i < 5; i++) {
        unsigned int number = RAND_INT;
        fprintf(stderr, "\n%i -- Int+Timestamp \n", i);
        vector_unsigned_int.add(number, number);
        delay(1325);
    }

    vector_unsigned_int.get(150);

    return 0;
}