#include <iostream>
#include "functions.h"
using namespace std;

int countOdds (const vector <int> & v) 
{
  int x = 0;
   for (auto i = v.begin(); i != v.end(); i++)
   {
      if (*i%2 > 0)
        x++;
   }
   return x;
  
}
    

 