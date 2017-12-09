//Austin Griffith
//November 2, 2017
//ISYE 6767
//class for squaring the value of x

#include "quadratic.h"
#include "mfunc.h"

using namespace std;

quadratic::quadratic():mfunc()
{

}

double quadratic::value(double x)
{
    double y = x*x;
    return y;
}
