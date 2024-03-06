#include "common/behavior.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

Behavior::Behavior()
{
    active_ = false;

    start_time_ = 0.0;
    delta_time_ = 0.0;
    delay_ = 0.0;
}

double Behavior::getTime()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);

    return ((double)tv.tv_sec * 1000.0 + (double)tv.tv_usec / 1000.0);
}

bool Behavior::setActive(bool active)
{
    if (active == active_)
        return true;

    active_ = active;
    if (active)
    {
        if (!onStart())
        {
            onStop();
            active_ = false;
            return false;
        }

        start_time_ = prev_time_ = getTime();
        delta_time_ = 0;
        return true;
    }
    else
    {
        return onStop();
    }
}

bool Behavior::spinOnce()
{
    prev_time_ = prev_time_ + delta_time_;
    delta_time_ = getTime() - prev_time_;

    return onUpdate();
}

void Behavior::spin()
{
    start();
    
    while (active_)
    {
        if (!spinOnce())
            break;

        while (getTime() - start_time_ < delay_)
        {
            usleep(8000);
        }
    };

    stop();
}