#ifndef KINEMATICS_H
#define KINEMATICS_H
 
//#include Eigen-Bib

class Kinematics {
public:
    Kinematics();

    bool forwardKinematics(const double q[6], double &x, double &y, double &z);

    bool inverseKinematics(const double x, const double y, const double z, double q[6]);

private:
    double _d[6];                   
    double _a[6];   
    double _alpha[6]; 
};

#endif