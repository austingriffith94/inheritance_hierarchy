//Austin Griffith
//November 2, 2017
//ISYE 6767
//adds equation classes

#ifndef SUMOFFUNCTION_H
#define SUMOFFUNCTION_H

#include "mfunc.h"
#include <vector>

using namespace std;

class sumoffunction : public mfunc{
protected:
    vector<mfunc*> values_vec;
public:
    sumoffunction();
    void addfunc(mfunc *newfunc);
    virtual double value(double x);
    ~sumoffunction() {}
};

#endif
