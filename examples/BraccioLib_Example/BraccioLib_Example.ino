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

  
  robot.moveToPosition(550, 0, 50);
  robot.moveToPosition(550, 0, 280);
  robot.moveToPosition(550, 0, 50);
  robot.moveToPosition(550, 0, 30);




  // Braccio.begin();

  // Braccio.ServoMovement(10, 90, 90, 90, 90, 97, 60);
  // Braccio.ServoMovement(20, 98, 90, 0, 170, 97, 10);
  // Braccio.ServoMovement(20, 98, 25, 0, 170, 97, 10);
  // Braccio.ServoMovement(20, 98, 15, 25, 140, 97, 15);
  // Braccio.ServoMovement(20, 98, 15, 25, 140, 97, 73);
  // Braccio.ServoMovement(30, 98, 35, 45, 80, 97, 73);
  // Braccio.ServoMovement(30, 98, 90, 90, 0, 97, 73);
  // Braccio.ServoMovement(5, 180, 90, 90, 0, 97, 73);
  // Braccio.ServoMovement(30, 180, 65, 75, 80, 97, 73);
  // Braccio.ServoMovement(30, 180, 35, 45, 140, 97, 73);
  // Braccio.ServoMovement(30, 180, 15, 25, 140, 97, 73);
  // delay(200);
  // Braccio.ServoMovement(10, 180, 15, 25, 140, 97, 15);
  // Braccio.ServoMovement(30, 180, 90, 90, 90, 97, 60);
  // Braccio.ServoMovement(10, 90, 90, 90, 90, 97, 60);
}

void loop() {
  // put your main code here, to run repeatedly:
}