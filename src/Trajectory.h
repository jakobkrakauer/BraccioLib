#ifndef TRAJECTORY_H
#define TRAJECTORY_H

class Trajectory {
public:
    void linearInterpolate(const double qStart[5], const double qEnd[5], const double t, double qOut[5]);

    double computeStepSize(const double qStart[5], const double qEnd[5], const double vel);

private:
// later: circ and spline members
};

#endif