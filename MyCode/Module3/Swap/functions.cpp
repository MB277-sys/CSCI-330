#include <iostream>
#include "functions.h"
using namespace std;


void swap(vector<int>& v, int x, int y)
{
   int temp = v[x];
   v[x] = v[y];
   v[y] = temp;
}

 