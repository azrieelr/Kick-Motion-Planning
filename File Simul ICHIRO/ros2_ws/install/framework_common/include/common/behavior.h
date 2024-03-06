#ifndef BEHAVIOR_H
#define BEHAVIOR_H

class Behavior
{
private:

    bool active_;

    double start_time_;
    double prev_time_;
    double delta_time_;
    double delay_;

    double getTime();

public:

    Behavior();
    ~Behavior() { }

    virtual bool onStart() { return true; }
    virtual bool onUpdate() { return true; }
    virtual bool onStop() { return true; }

    bool setActive(bool active);
    void setDelay(double delay) { delay_ = delay; }

    double getDeltaTime() { return delta_time_; }

    bool spinOnce();
    void spin();

    bool start() { return setActive(true); }
    bool stop() { return setActive(false); }
};

#endif