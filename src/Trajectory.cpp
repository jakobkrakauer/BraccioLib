#include "Trajectory.h"

Trajectory::Trajectory() {
    _maxSpeed = 45.0; // TODO: Maximale Servogschwindigkeit in Grad/s prüfen
}
 
void Trajectory::linearInterpolate(const double qStart[6], const double qEnd[6], double t, double qOut[6]) {
    // TODO: Lineare Interpolation: qOut = qStart + t * (qEnd - qStart)
    for (int i = 0; i < 6; i++) {
        qOut[i] = 0.0; // Platzhalter
    }
}
 
double Trajectory::computeStepSize(double vel, unsigned long deltaT_ms) {
    // TODO: Schrittweite berechnen basierend auf Geschwindigkeit und Zeitschritt
    // Beispiel: bei vel=1.0 und deltaT=20ms -> dt so dass Bewegung in realistischer Zeit abläuft
    return 0.0; // Platzhalter
}