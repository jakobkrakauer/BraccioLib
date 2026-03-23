#include "Kinematics.h"

Kinematics::Kinematics() {

    // _a[0] = ...;  // Denavit-Hartenberg Parameter initialisieren (Aus Datenblatt auslesen/einmalig berechnen) -> außer _joints
    // _d[0] = ...;
    // ...

}

bool Kinematics::forwardKinematics(const double q[6], double &x, double &y, double &z) {
    // DH Parameter für Zielkoordinaten berechen (für jedes Gelenk eine 4x4 Transformationsmatrix aufstellen (mithilfe von Eigen))

    // Platzhalter
    x = 0.0;
    y = 0.0;
    z = 0.0;
    
    return false;   
}

bool Kinematics::inverseKinematics(const double x, const double y, const double z, double q[6]) {
    // Prüfen ob Position im Arbeitsraum liegt
    // Gelenkwinkel mittels analytischer/numerischer/geometrischer Ansatz nach Weber über IK berechnen

    // Platzhalter
    for (int i = 0; i < 6; i++) {
        q[i] = 0.0;
    }

    return false; 
}