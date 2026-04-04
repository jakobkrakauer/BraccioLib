#include "BraccioController.h"

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
        // 2. send movement to the servos
        // 3. update _joints and _tcp (calculate _tcp via forwardKinematics)
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