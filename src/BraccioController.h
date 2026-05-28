#ifndef BRACCIO_CONTROLLER_H
#define BRACCIO_CONTROLLER_H

#include <Braccio.h>
#include "Kinematics.h"
#include "Trajectory.h"

class BraccioController {
public:
    BraccioController();                                    

    bool lin(const double x, const double y, const double z, const double vel);
    bool ptp(const double q1, const double q2, const double q3, const double q4, const double q5, const double vel);

    void getCurrentPosition(double &x, double &y, double &z);
    void getCurrentJoints(double q[5]);

    // Temporary function for testing IK without trajectory planning.
    bool moveToPosition(const double x, const double y, const double z, const double phi = 90.0);

    void setGripper(const int angle);
    void gripperOpen();
    void gripperClose(); 


private:
    double _joints[5];
    double _tcp[3];

    Kinematics _kinematics;
    Trajectory _trajectory; 

    int _gripperAngle = 0;
};

#endif