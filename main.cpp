#include <stdio.h>
#include <time.h>
#include <cstdlib>

#include "data.h"
#include "macros.h"

using namespace std;

#define DEBUG
#define RAND_INT rand() % 100
#define RAND_FLOAT ((float)((((float) (rand() % 100)) / ((float) (rand() % 100))) * 100.0))

int main() {

    fprintf(stderr, "hello world.\n");

    DataVector<int> vector_int;
    DataVector<float> vector_float;

    srand(time(NULL));

    int i;
    for (i = 0; i < 5; i++) {
        fprintf(stderr, "\n%i -- Int \n", i);
        vector_int.add(RAND_INT, time(0));
        delay(1000);
    }

    for (i = 0; i < 5; i++) {
        fprintf(stderr, "\n%i -- Float \n", i + 5);
        vector_float.add(RAND_FLOAT, time(0));
        delay(1000);
    }

    return 0;
}