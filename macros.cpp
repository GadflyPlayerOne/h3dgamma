#ifndef __MACROS_CPP__
#define __MACROS_CPP__

#include <chrono>
#include <thread>

#define NS_PER_MS 1000000

void delay(int ms) {
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    sleep_for(nanoseconds(ms * NS_PER_MS));
}

#endif