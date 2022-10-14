#include <iostream>
#include "functions.h"
using namespace std;


int multiplex (const vector<int>& v, int n)
  {
    int max = -99;
    int x = v.size();
    if (n== 1 || n > x)
      {
        return max;
      }
    else
      {
//        vector<int>:: const_iterator vbegin = v.begin();
//        vector<int>:: const_iterator vend = v.end();

          for (unsigned int i = 0; i < v.size()-(n-1); i++)
          {
            int y= 1;
            for (int j = 0; j < n; j++)
              {
                y = y*v[i+j];
                if (y> max)
              {
                max = y;
              }
                  
            }
          }
          
          return max;
      }
  }


