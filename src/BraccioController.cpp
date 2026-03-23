#include "BraccioController.h"

BraccioController::BraccioController() {
    for (int i = 0; i < 5; i++) {
        _joints[i] = 90.0;
    }
    _joints[5] = 73.0;

    //VK via _kinematics
}

bool BraccioController::lin(const double x, const double y, const double z, const double vel) {
    //Schritt 1 – IK via _kinematics

    //Schritt 2 – lineare Interpolation: von _joints hin zu den Zielgelenkwinkeln

    //Schritt 3 – bewegung an die Servos schicken

    //Schritt 4 – _joints und _tcp aktualisieren


    return false;
}

bool BraccioController::ptp(const double q1, const double q2, const double q3, const double q4, const double q5, const double q6) {
    //...
    return false;
}

void BraccioController::getCurrentPosition(double &x, double &y, double &z) {
    x = _tcp[0];
    y = _tcp[1];
    z = _tcp[2];
}

void BraccioController::getCurrentJoints(double q[6]) {
    for (int i = 0; i < 6; i++) {
        q[i] = _joints[i];
    }
}