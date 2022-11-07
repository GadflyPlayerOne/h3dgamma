#include <stdio.h>
#include <time.h>
#include <cstdlib>

#include "complexData.h"
#include "data.h"
#include "macros.h"

using namespace std;

#define DEBUG
#define RAND_INT ((unsigned int) rand() % 100)
#define RAND_FLOAT ((float)((((float) (rand() % 100)) / ((float) (rand() % 100))) * 100.0))

#define M 3

int main() {

    fprintf(stderr, "hello world.\n");

    DataVector<int> vector_int;
    DataVector<float> vector_float;
    DataVector<unsigned int> vector_unsigned_int;
    ComplexVector<double> vector_complex;
    ComplexVector<double> vector_complex2;

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
        fprintf(stderr, "\n%i -- Int+Timestamp \n", i + 10);
        vector_unsigned_int.add(number, number);
        delay(1325);
    }

    vector_unsigned_int.get(150);

    vector_complex.setM(M);
    int j;
    for (i = 0; i < 5; i++)
    {
        fprintf(stderr, "\n%i -- Complex \n", i + 15);
        double * complex = (double *)malloc(sizeof(double) * M);
        for (j = 0; j < M;j++) 
            complex[j] = (double)RAND_FLOAT;
        
        vector_complex.add(complex, time(0));
        delay(1325);
    }

    vector_complex.get(time(0) - 5);

    vector_complex2.setM(M*2);
    for (i = 0; i < 5; i++)
    {
        fprintf(stderr, "\n%i -- Complex * 2 \n", i + 20);
        double * complex = (double *)malloc(sizeof(double) * M * 2);
        for (j = 0; j < M * 2;j++) 
            complex[j] = (double)RAND_FLOAT;
        
        vector_complex2.add(complex, time(0));
        delay(1325);
    }

    vector_complex2.get(time(0) - 5);

    return 0;
}