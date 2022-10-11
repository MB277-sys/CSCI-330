#include <iostream>
#include "functions.h"
using namespace std;

string removeSpaces(string s)
{
  string ret("");
  for (int i = 0; i < s.length(); i++) 
  {
    if (s[i] != ' ') 
    {
      ret = ret+ s[i]; 
    }

  }
  return ret; 
}
