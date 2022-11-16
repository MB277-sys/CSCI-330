#include <vector>
#include <iostream>

#include "HighLow.h"
#include "functions.h"

using namespace std;

int main() 
{
   try
   {
      vector<HighLow> temps;
      populate(temps);
      chart(temps);
   }
   catch (const char * error)
   {
      cout << error << endl;
   }
   
   return 0;
}