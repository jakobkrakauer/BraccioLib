#include "Kinematics.h"

#include <Arduino.h>

// Helper functions for angle conversion (cgxeiji InverseK)
float Kinematics::b2a(float b) { return b / 180.0 * PI - HALF_PI; }
float Kinematics::a2b(float a) { return (a + HALF_PI) * 180 / PI; }

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

    // Setup cgxeiji Links
    // Link lengths and joint limits for TinkerKit Braccio
    _lBase.init(0, b2a(0.0), b2a(180.0));
    _lUpperarm.init(200, b2a(15.0), b2a(165.0));
    _lForearm.init(200, b2a(0.0), b2a(180.0));
    _lHand.init(270, b2a(0.0), b2a(180.0));
    InverseK.attach(_lBase, _lUpperarm, _lForearm, _lHand);
}

bool Kinematics::forwardKinematics(const double q[5], double &x, double &y, double &z) {
    // Calculate transformation matrix T03 using the DH parameters

    // Read the position from T03

    // Later: Include T34 and T45

}

bool Kinematics::inverseKinematics(const double x, const double y, const double z, const double phi, double q[5]) {
    // Check whether the position lies within the workspace

    // IK for position → calculate q1, q2, q3 (analytical/numerical/geometric approach according to Weber)
    // -> q4, q5 remain unchanged
    
    // for later: IK for orientation → calculate q4, q5
    
    // Setup cgxeiji
    // Check whether position is reachable via InverseK.solve()
    float a0, a1, a2, a3;
    
    if(!InverseK.solve(x, y, z, a0, a1, a2, a3, b2a(phi))) {
    return false;
    }

    // Store results in q[] (convert from float to double)
    q[0] = a2b(a0);  // base
    q[1] = a2b(a1);  // shoulder
    q[2] = a2b(a2);  // elbow
    q[3] = a2b(a3);  // wrist
    // q[4] remains unchanged (orientation, PPP2)

    return true;
}