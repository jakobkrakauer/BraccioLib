#include "Kinematics.h"

//#include Eigen-Bib

Kinematics::Kinematics() {
    // Initialize Denavit-Hartenberg parameters (fixed, from datasheet)
    // theta = _joints[i] (variable, not set here)

    // Link lengths (mm)
    // _a[0] = ...;
    // _a[1] = ...;
    // ...

    // Z-offset (mm)
    // _d[0] = ...;
    // _d[1] = ...;
    // ...

    // Twist angles (deg)
    // _alpha[0] = ...;
    // _alpha[1] = ...;
    // ...

}

bool Kinematics::forwardKinematics(const double q[5], double &x, double &y, double &z) {
    // Calculate transformation matrix T03 using the DH parameters

    // Read the position from T03

    // Later: Include T34 and T45

}

bool Kinematics::inverseKinematics(const double x, const double y, const double z, double q[5]) {
    // Check whether the position lies within the workspace

    // IK for position → calculate q1, q2, q3 (analytical/numerical/geometric approach according to Weber)
    // -> q4, q5 remain unchanged
    
    // for later: IK for orientation → calculate q4, q5
    
}