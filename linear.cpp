//Austin Griffith
//November 2, 2017
//ISYE 6767
//class for multiplying x by a coefficient

#include "linear.h"
#include "mfunc.h"

using namespace std;

//if no initalized 'a' value, assumed 1
linear::linear():mfunc()
{
    a = 1;
}

//if initialized with an 'a' value
linear::linear(double A_):mfunc()
{
    a = A_;
}

double linear::value(double x)
{
    double y = a*x;
    return y;
}
