#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

double adjustPopulationOneYear(int pop,int bRate,int dRate)
{
  double NRI = (bRate - dRate);
// double popIn =  * pop;
  int oneYrPop = NRI +pop;
  //int oneYrPop = popIn + pop;
  return oneYrPop; 
}
