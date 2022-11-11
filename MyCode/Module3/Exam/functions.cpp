#include <iostream>
#include "functions.h"
using namespace std;


bool tastesGood(const vector<int>& v) 
  {
    bool taste = false; 
    auto st = v.begin(); 
    auto en = v.end(); 

    if(v.front() == v.back())
      {
        taste = true; 
      } else {
        taste = false; 
      }

    if(v.size() > 5)
      {
        taste = false; 
      } else {
        taste = true; 
      }

    int even = 0; 
    int odd = 0;

    for(unsigned int i = 0; i<v.size(); i++)
      {
        if(v[i]%2==0) 
        {
          even++; 
        }
        else
        {
          odd++; 
        }
      }
// final 
    if(even > odd) 
      {
        taste = true; 
      }
    else
    {
      taste = false; 
    } 
    
    return taste; 
  }