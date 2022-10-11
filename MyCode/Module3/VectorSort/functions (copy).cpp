#include <iostream>
#include "functions.h"
using namespace std;


void swap(vector<int>& v, int x, int y)
{
   int temp = v[x];
   v[x] = v[y];
   v[y] = temp;
}

void sortVector(vector<int>& v)
{

  int last = v.size()-1;
   while (last > 0)
   {
      for (int i(0); i < last; i++)
      {         
         if (v[i] > v[i+1]) 
         {
          swap(v, i, i+1);
         }
      }
      last = last - 1;
   }
}
  
 //  int temp = v[x];
   // v[x] = v[y];
   // v[y] = temp;
}


 