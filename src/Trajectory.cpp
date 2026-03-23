#include "Trajectory.h"

void Trajectory::linearInterpolate(const double qStart[6], const double qEnd[6], double t, double qOut[6]) {
    // Lineare Interpolation mittels qOut = qStart + t * (qEnd - qStart) 
    
    
    // Platzhalter
    for (int i = 0; i < 6; i++) {
        qOut[i] = 0.0; 
    }
}
 
double Trajectory::computeStepSize(double vel, unsigned long deltaT_ms) {
    // Schrittweite berechnen basierend auf Geschwindigkeit und Zeitschritt
    
    return 0.0; // Platzhalter
}