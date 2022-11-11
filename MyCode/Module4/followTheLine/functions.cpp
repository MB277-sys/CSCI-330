#include <iostream>
#include "functions.h"
using namespace std;

bool followTheLine(const vector<string *>& v)
  {

    for (auto i = v.begin(); i != v.end(); i++)
      {
        string *p = *i; 
        cout <<*p<< endl; 
        *p = "done"; 
      }

      if(v.size() < 3)
      {
      return false; 
      } else {
      return true; 
      }
  }


