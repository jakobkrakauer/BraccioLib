/*
 * BraccioLib - BraccioController.cpp
 * Copyright (C) 2025 Jakob Krakauer
 *
 * Contains code based on CGx-InverseK
 * Copyright (C) 2017 Eiji Onchi
 * https://github.com/cgxeiji/CGx-InverseK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#include "BraccioController.h"

#include <Arduino.h>

BraccioController::BraccioController() {
    for (int i = 0; i < 5; i++) {
        _joints[i] = 90.0;
    }

    // initialize _tcp via _kinematics.forwardKinematics(...);

}

bool BraccioController::lin(const double x, const double y, const double z, const double vel) {
    // Step 1 – calcualte Target angle via _kinematics.inverseKinematics(...);

    // Step 2: calculate stepSize 
        // double stepSize = _trajectory.computeStepSize(...);

    //  Step 3 – loop: 
        // 1. calculate next interpolation step via _trajectory.linearInterpolate(...);
        // 2. update _joints and _tcp (calculate _tcp via forwardKinematics) 
        // 3. send current _joints values to the servos
        // 4. send _joints and _tcp to terminal 

}

bool BraccioController::ptp(const double q1, const double q2, const double q3, const double q4, const double q5, const double vel) {
    // Step 1: calculate stepSize 
        // double stepSize = _trajectory.computeStepSize(...);
    
    //  Step 2 – loop: 
        // 1. calculate next interpolation step via _trajectory.linearInterpolate(...);
        // 2. send movement to the servos
        // 3. update _joints and _tcp (calculate _tcp via forwardKinematics)
        // 4. send _joints and _tcp to terminal 
    
}

void BraccioController::getCurrentPosition(double &x, double &y, double &z) {
    x = _tcp[0];
    y = _tcp[1];
    z = _tcp[2];
}

void BraccioController::getCurrentJoints(double q[5]) {
    for (int i = 0; i < 5; i++) {
        q[i] = _joints[i];
    }
}

bool BraccioController::moveToPosition(const double x, const double y, const double z, const double phi) {
    // Step 1: calculate target joint angles via _kinematics.inverseKinematics()
    double qTarget[5];
    if(_kinematics.inverseKinematics(x, y, z, phi, qTarget)) {
        Serial.print(F("Angles: "));
        Serial.print(qTarget[0]); Serial.print(F(", "));
        Serial.print(qTarget[1]); Serial.print(F(", "));
        Serial.print(qTarget[2]); Serial.print(F(", "));
        Serial.println(qTarget[3]);
    } else {
        Serial.println("Position not reachable!");
        return false;
    }

    // Step 2: send joint angles to servos
    Braccio.ServoMovement(20,
        (int)qTarget[0],  // base
        (int)qTarget[1],  // shoulder
        (int)qTarget[2],  // elbow
        (int)qTarget[3],  // wrist_ver
        90,               // wrist_rot fix
        _gripperAngle     // gripper fix
    );

    // Step 3: update _joints
    for(int i = 0; i < 5; i++) {
        _joints[i] = qTarget[i];
    }

    return true;
}

void BraccioController::setGripper(const int angle) {
    _gripperAngle = angle;
    Braccio.ServoMovement(20,
        (int)_joints[0], (int)_joints[1], (int)_joints[2],
        (int)_joints[3], 90, _gripperAngle);
}

void BraccioController::gripperOpen()  { setGripper(0); }
void BraccioController::gripperClose() { setGripper(73);  }