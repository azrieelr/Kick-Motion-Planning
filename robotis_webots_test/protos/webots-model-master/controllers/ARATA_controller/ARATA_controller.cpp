#include <webots/Robot.hpp>
#include <webots/Camera.hpp>
#include <webots/Motor.hpp>

// All the webots classes are defined in the "webots" namespace
using namespace webots;

int main(int argc, char **argv) {
  // create the Robot instance.
  Robot *robot = new Robot();

  // get the time step of the current world.
  int timeStep = (int)robot->getBasicTimeStep();
  
  Camera *camera;
  camera = robot->getCamera("Camera");
  camera->enable(timeStep);
  
  Motor *head[2];
  char headJointName[2][11] = {"neck_yaw", "neck_pitch"} ;
  // for (int i = 0; i < 2; i++) {
    // head[i] = robot->getMotor(headJointName[i]);
    // head[i]->setPosition(INFINITY);
    // head[i]->setVelocity(0.0);
  // }
  
  // while (robot->step(timeStep) != -1) {
    // head[0]->setVelocity(1.0);
    // head[1]->setVelocity(1.0);
  // };

  delete robot;
  return 0;
}
