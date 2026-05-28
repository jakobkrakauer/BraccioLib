// Development: #include "src/BraccioController.h"
// After installation: #include <BraccioController.h>

#include <Braccio.h>
#include "src/BraccioController.h"

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

void setup() {
  Serial.begin(9600);
  while(!Serial);

  Braccio.begin();

  BraccioController robot;

  // robot.gripperOpen();
  // robot.moveToPosition(550, 0, 50);
  // robot.gripperClose();
  // robot.moveToPosition(550, 0, 280);
  // robot.moveToPosition(550, 0, 50);
  // robot.gripperOpen();
  // robot.moveToPosition(650, 0, 50);
  robot.moveToPosition(550, 0, 10);
}

void loop() {
  // put your main code here, to run repeatedly:
}