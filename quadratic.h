//Austin Griffith
//November 2, 2017
//ISYE 6767
//class for squaring the value of x

#ifndef QUADRATIC_H
#define QUADRATIC_H

#include "mfunc.h"

using namespace std;

class quadratic : public mfunc{
protected:
    double a;
public:
    quadratic();
    virtual double value(double x);
    ~quadratic() {}
};

#endif
