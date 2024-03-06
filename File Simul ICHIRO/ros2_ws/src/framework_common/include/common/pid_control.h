#ifndef PID_CONTROL_H
#define PID_CONTROL_H

class PIDControl
{
public:

    float p_gain_;
    float i_gain_;
    float d_gain_;

    PIDControl();
    PIDControl(float p_gain, float i_gain, float d_gain);

    void setGains(float p_gain, float i_gain, float d_gain);
    float compute(float error);

private:

    float cummulative_error_;
    float last_error_;
};

#endif