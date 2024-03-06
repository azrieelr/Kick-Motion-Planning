#include "common/pid_control.h"

PIDControl::PIDControl()
{
    setGains(0.0, 0.0, 0.0);

    cummulative_error_ = 0.0;
    last_error_ = 0.0;
}

PIDControl::PIDControl(float p_gain, float i_gain, float d_gain)
{
    setGains(p_gain, i_gain, d_gain);

    cummulative_error_ = 0.0;
    last_error_ = 0.0;
}

void PIDControl::setGains(float p_gain, float i_gain, float d_gain)
{
    p_gain_ = p_gain;
    i_gain_ = i_gain;
    d_gain_ = d_gain;
}

float PIDControl::compute(float error)
{
    float output = error * p_gain_;

    cummulative_error_ += error;
    output += cummulative_error_ * i_gain_;

    output += (error - last_error_) * d_gain_;
    last_error_ = error;

    return output;
}