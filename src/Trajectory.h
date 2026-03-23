#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include "Config.h"
//#include Eigen-Bib

/**
 * Klasse zur Trajektorienplanung und Interpolation.
 *
 * Berechnet interpolierte Zwischenpositionen zwischen
 * Start- und Zielpunkt für verschiedene Bewegungstypen.
 *
 * Unterstützte Bewegungstypen (geplant):
 *   - Linear       (lin):   Gerade Linie im Gelenkwinkelraum
 *   - Kreisförmig  (circ):  Kreisbahn im kartesischen Raum
 *   - Spline       (spline): Glatte Kurve durch mehrere Punkte
 */

class Trajectory {
public:

    /**
     * @param qStart  Startgelenkwinkel [6]
     * @param qEnd    Zielgelenkwinkel  [6]
     * @param t       Interpolationsparameter (0.0 bis 1.0)
     * @param qOut    Ausgabe: interpolierte Gelenkwinkel [6]
     */

     // Berechnet einen linearen Interpolationsschritt
     // Interpoliert zwischen Start- und Zielgelenkwinkeln
     // t = 0.0 -> Startposition, t = 1.0 -> Zielposition

    void linearInterpolate(const double qStart[6], const double qEnd[6], double t, double qOut[6]);


    // Berechnet die Schrittweite t basierend auf der Geschwindigkeit vel.
    // vel = 1.0 → t springt z.B. um 0.1 pro Takt → 10 Schritte bis t=1.0 → schnell
    // vel = 0.2 → t springt z.B. um 0.02 pro Takt → 50 Schritte bis t=1.0 → langsam

    double computeStepSize(double vel, unsigned long deltaT_ms);

private:
// später: circ und spline Member
};

#endif