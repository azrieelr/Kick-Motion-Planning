#include <webots/DistanceSensor.hpp>
#include <webots/Motor.hpp>
#include <webots/Robot.hpp>

#define TIME_STEP 64
using namespace webots;

int main(int argc,  char**argv){
  Robot *robot = new Robot();
  DistanceSensor *ds[2];
  char dsNames[2][10] = {"sensor1", "sensor2"};
  for (int i = 0; i < 2; i++){
    ds[i] = robot->getDistanceSensor(dsNames[i]);
    ds[i]->enable(TIME_STEP);
  }
  
  Motor *wheel[4];
  char wheelNames[4][10] = {"wheel1", "wheel2", "wheel3", "wheel4"};
  for (int i = 0; i < 4; i++){
    wheel[i] = robot->getMotor(wheelNames[i]);
    wheel[i]->setPosition(INFINITY);
    wheel[i]->setVelocity(0.0);
  }
  
  int counter = 0;
  while(robot->step(TIME_STEP) != -1){
    double leftSpeed = 1.0;
    double rightSpeed = 1.0;
    if (counter > 0){
      counter--;
      leftSpeed = 1.0;
      rightSpeed = -1.0;
    } else {
      for (int i = 0; i < 2; i++){
        if (ds[i]->getValue() < 950.0) counter = 100;
      }
    }
    
    wheel[0]->setVelocity(leftSpeed);
    wheel[1]->setVelocity(rightSpeed);
    wheel[2]->setVelocity(leftSpeed);
    wheel[3]->setVelocity(rightSpeed);
  }
  
  delete robot;
  return 0;
}