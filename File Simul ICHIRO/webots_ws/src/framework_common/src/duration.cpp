#include "common/duration.h"

Duration::Duration(double sec)
{
    time_.tv_sec = (int)sec;
    time_.tv_nsec = (int)((sec - (double)time_.tv_sec) * 1000000000);
}

double Duration::getDeltaSedonds()
{
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);

    now.tv_sec -= time_.tv_sec;
    now.tv_nsec -= time_.tv_nsec;
    
    return getSeconds(now);
}