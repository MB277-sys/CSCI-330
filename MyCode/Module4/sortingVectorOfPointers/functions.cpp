#include <iostream>
#include "functions.h"
using namespace std;

void swap(vector<string*>& v, int x, int y)
  {
     string *temp = v[x];
     v[x] = v[y];
     v[y] = temp;
  }

void sortVector (vector<string *>& v)
  {
   unsigned int n = v.size(); 

    for(unsigned int i = 0; i < n; i++)
      {
      v.push_back(v[i]); 
      }
    
    int l = v.size()-1;     
    
    while(l > 0) 
      {
        for(int i(0); i < l; i++)
          {
            if(*v[i] < *v[i+1])
              {
                swap (v, i, i+1); 
              }
          }
        l = l -1; 
      }
  }


