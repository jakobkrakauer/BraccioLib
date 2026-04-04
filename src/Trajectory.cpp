#include "Trajectory.h"
#include "Config.h"

//#include Eigen-Bib

void Trajectory::linearInterpolate(const double qStart[5], const double qEnd[5], const double t, double qOut[5]) {
    // t [0.0, 1.0]
    
    // for joints 1–3: qOut[i] = qStart[i] + t * (qEnd[i] - qStart[i]);

    // q4 and q5 remain unchanged for now
        // qOut[3] = qStart[3];
        // qOut[4] = qStart[4];

}
    
double Trajectory::computeStepSize(const double qStart[5], const double qEnd[5], const double vel) { 
    // vel [0.0, 1.0]

    // Calculate maxAngleDiff  using the initial and final angles

    // calculate stepsize = (vel * MAX_SPEED * deltaT_ms) / (1000.0 * maxAngleDiff);
    //      - max_speed: maximum joint speed [deg/s]
    //      - deltaT_ms: time per step [ms]
    //      - maxAngleDiff:  largest joint angle difference [deg]
    
}