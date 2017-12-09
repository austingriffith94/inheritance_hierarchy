//Austin Griffith
//November 2, 2017
//ISYE 6767
//additional class for extra quadratic equation
//used to test ease of implementation of new equation classes

#ifndef QUADRATIC2_H
#define QUADRATIC2_H

#include "mfunc.h"
#include <cmath>

using namespace std;

class quadratic2 : public mfunc{
protected:
    double a;
    double b;
    double c;
public:
    quadratic2();
    quadratic2(double A_);
    quadratic2(double A_, double B_);
    virtual double value(double x);
    ~quadratic2() {}
};

#endif
