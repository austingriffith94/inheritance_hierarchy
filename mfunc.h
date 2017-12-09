//Austin Griffith
//November 2, 2017
//ISYE 6767
//master class for all functions

#ifndef MFUNC_H
#define MFUNC_H

using namespace std;

class mfunc{
public:
    mfunc();
    virtual double value(double x);
    virtual ~mfunc(){}
};

#endif
