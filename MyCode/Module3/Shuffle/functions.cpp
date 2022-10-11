#include <iostream>
#include "functions.h"
using namespace std;

void shuffle(vector<int>& v)
{
  // move to main....
  //srand(time(NULL));

   int i1(0);
   int i2(0);
   for (unsigned int i(0); i < 10; i++)
   {
      do
      {
         i1 = rand() % v.size();     
         i2 = rand() % v.size();     
      } while (i1 == i2);
      
      swap(v, i1, i2);
   }
    

}

void swap(vector<int>& v, int x, int y)
{
   int temp = v[x];
   v[x] = v[y];
   v[y] = temp;
}

 