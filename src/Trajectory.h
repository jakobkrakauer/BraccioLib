#ifndef TRAJECTORY_H
#define TRAJECTORY_H

//#include Eigen-Bib

class Trajectory {
public:
    Trajectory();
    
    void linearInterpolate(const double qStart[6], const double qEnd[6], double t, double qOut[6]);

    double computeStepSize(double vel, unsigned long deltaT_ms);

private:
double _maxSpeed;
};

#endif // TRAJECTORY_H