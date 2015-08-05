#ifndef INVERTED_PENDULUM_H
#define INVERTED_PENDULUM_H

#include "BlackBox.h"

public class InvertedPendulum : public BlackBox<double, double>{
    // length = meters, mass = Kg
    InvertedPendulum(double length, double mass);

    // newtons to the left (on the pivot)
    void exertForce(double f);
    void giveInput(double f) {exertForce(f);}

    // angle to straight up (degrees)
    double getAngle();
    double getOutput() {return getAngle();}
    
    // seconds 
    void advanceTime(double dt);
};

#endif // INVERTED_PENDULUM_H
