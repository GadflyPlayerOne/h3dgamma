#ifndef __MACROS_CPP__
#define __MACROS_CPP__

#include <chrono>
#include <thread>
#include <stdio.h>

#define NS_PER_MS 1000000

void delay(int ms) {
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    fprintf(stderr, "Delaying for %i ms...\n", ms);
    sleep_for(nanoseconds(ms * NS_PER_MS));
}

#endif