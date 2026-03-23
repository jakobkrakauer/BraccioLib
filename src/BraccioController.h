#ifndef BRACCIO_CONTROLLER_H
#define BRACCIO_CONTROLLER_H

#include "Kinematics.h"
#include "Trajectory.h"

class BraccioController {
public:
    BraccioController();                                    

    bool lin(const double x, const double y, const double z, const double vel);

    bool ptp(const double q1, const double q2, const double q3, const double q4, const double q5, const double q6);

    void getCurrentPosition(double &x, double &y, double &z);

    void getCurrentJoints(double q[6]);

private:
    double _joints[6];
    double _tcp[3];

    Kinematics _kinematics;
    Trajectory _trajectory;
};

#endif

