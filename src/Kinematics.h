#ifndef KINEMATICS_H
#define KINEMATICS_H

class Kinematics {
public:
    Kinematics();

    bool forwardKinematics(const double q[5], double &x, double &y, double &z);

    bool inverseKinematics(const double x, const double y, const double z, double q[5]);

private:
    double _d[5];                   
    double _a[5];   
    double _alpha[5]; 
};

#endif