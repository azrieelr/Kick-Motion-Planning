#ifndef DURATION_H
#define DURATION_H

#include <time.h>

class Duration
{
private:

    struct timespec time_;

    double getSeconds(struct timespec t) { return (double)time_.tv_sec + ((double)time_.tv_nsec / 1000000000); }

public:

    Duration() { Duration(0); }
    Duration(double sec);

    void getCurrentTime() { clock_gettime(CLOCK_MONOTONIC, &time_); }

    double getSeconds() { return getSeconds(time_);  }
    double getDeltaSedonds();
};

#endif