#include <iostream>
#include "functions.h"
using namespace std;


int Multiplex (const vector<int>& v int n) 
  {
    int sum = 0; 
    int x = v.size(); 
    vector<int>:: const_iterator vbegin = v.begin(); 
    vector<int>:: const_iterator vend = v.end(); 

    for(vector<int>:: const_iterator p = vbegin; p!=vend; p++) 
      {
        sum = *p*n; 

        for (int i = 0; i < n; i++) 
        {
           for (int j = 1; j < n; j++)
             {
               
             }
          
          
        }
        
      }

  }