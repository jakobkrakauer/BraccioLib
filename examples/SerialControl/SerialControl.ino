#include <Braccio.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

BraccioController robot;

void setup() {
 Braccio.begin();

}