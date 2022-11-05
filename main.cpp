#include <stdio.h>
#include <time.h>

#include "data.h"
#include "macros.h"

using namespace std;


int main() {

    fprintf(stderr, "hello world.\n");

    DataVector<int> vector;

    int i;
    for (i = 0; i < 5; i++) {
        vector.add(1, time(0));
        delay(1000);
    }

    return 0;
}