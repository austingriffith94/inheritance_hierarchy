//Austin Griffith
//November 2, 2017
//ISYE 6767
//adds equation classes

#include "sumoffunction.h"
#include "mfunc.h"
#include <vector>
#include <fstream>

using namespace std;

sumoffunction::sumoffunction():mfunc()
{
    values_vec;
}

double sumoffunction::value(double x)
{
    double size_vec = values_vec.size();
    double sum_vec = 0;

    for(int i = 0; i < size_vec; i++)
    {
        sum_vec += values_vec[i] -> value(x);
    }

    return sum_vec;
}

void sumoffunction::addfunc(mfunc *newfunc)
{
    values_vec.push_back(newfunc);
}


