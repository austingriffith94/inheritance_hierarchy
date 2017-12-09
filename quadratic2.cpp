//Austin Griffith
//November 2, 2017
//ISYE 6767
//additional class for extra quadratic equation
//used to test ease of implementation of new equation classes

#include "quadratic2.h"
#include "mfunc.h"

using namespace std;

//if no initalized values, assumed 1
quadratic2::quadratic2():mfunc()
{
    a = 1;
    b = 1;
}

//if initialized with an 'a' value, but no 'b' value
quadratic2::quadratic2(double A_):mfunc()
{
    a = A_;
    b = 1;
}

//if initialized with both values
quadratic2::quadratic2(double A_, double B_):mfunc()
{
    a = A_;
    b = B_;
}

double quadratic2::value(double x)
{
    c = exp(a/b);
    double y = a*x*x - b*b*x + c;
    return y;
}
