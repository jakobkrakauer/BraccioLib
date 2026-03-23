#include "Kinematics.h"

Kinematics::Kinematics(){

    // _a[0] = ...;  // Denavit-Hartenberg Parameter initialisieren (Aus Datenblatt auslesen/einmalig berechnen) -> außer _joints
    // _d[0] = ...;
    // ...

}

bool Kinematics::forwardKinematics(const double q[6], double &x, double &y, double &z) {
    // TODO: DH-Transformation berechnen
    // Für jedes Gelenk eine 4x4 Transformationsmatrix aufstellen (mit Eigen)
    // Matrizen multiplizieren -> Endeffektorpose
    x = 0.0;
    y = 0.0;
    z = 0.0;
    return false; // Platzhalter    
}

bool Kinematics::inverseKinematics(const double x, const double y, const double z, double q[6]) {
    // TODO: Analytische oder numerische IK-Lösung
    // Prüfen ob Position im Arbeitsraum liegt
    // Gelenkwinkel berechnen (geometrischer Ansatz nach Weber)
    for (int i = 0; i < 6; i++) {
        q[i] = 0.0;
    }
    return false; // Platzhalter
}