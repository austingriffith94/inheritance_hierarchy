//Austin Griffith
//November 2, 2017
//ISYE 6767
//class for multiplying x by a coefficient

#ifndef LINEAR_H
#define LINEAR_H

#include "mfunc.h"

using namespace std;

class linear : public mfunc{
protected:
    double a;
public:
    linear();
    linear(double A_);
    virtual double value(double x);
    ~linear() {}
};

#endif
