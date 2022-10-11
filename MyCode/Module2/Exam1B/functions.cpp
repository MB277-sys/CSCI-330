#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

string makeCamel(string s[], int count)
  { 
  string fin = "";
   for (int i = 0; i < count; i++) 
   {
     // first one all each elelemt 
      fin += toupper(s[i][0]);
      for (int j = 1; j < s[i].size(); j++) 
        {
          fin += tolower(s[i][j]);
        }
     
   }

    fin[0] = tolower(fin[0]);
    
   return fin;
}
    

 