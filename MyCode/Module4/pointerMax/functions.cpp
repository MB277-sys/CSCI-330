#include <iostream>
#include "functions.h"
using namespace std;


void  findLargest (int *x, int *y, int *z, int *large)
  {
    *large = *x; 
    
  if(*x > *y && *x > *z) 
    {
      *large = *x; 
    }

      if(*y > *x && *y > *z) 
    {
      *large = *y; 
    }

      if(*z > *y && *z > *x) 
    {
      *large = *z; 
    }

    return;  
  }


