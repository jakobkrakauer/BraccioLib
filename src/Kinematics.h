#ifndef KINEMATICS_H
#define KINEMATICS_H

#include <InverseK.h>

class Kinematics {
public:
    Kinematics();

    bool forwardKinematics(const double q[5], double &x, double &y, double &z);

    bool inverseKinematics(const double x, const double y, const double z, const double phi, double q[5]);

private:
    double _d[5];                   
    double _a[5];   
    double _alpha[5]; 

    // Helper functions for angle conversion (cgxeiji InverseK)
    float b2a(float b);
    float a2b(float a);

    Link _lBase, _lUpperarm, _lForearm, _lHand;    
};

#endif