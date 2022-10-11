#include <iostream>
#include <iomanip>
#include "functions.h"
using namespace std;

int main() 
{

  try 
  {
    string x = removeSpaces("Happy birthday");
    cout <<x<< endl; 
    
    return 0;
  } 
  catch (const char * error) 
  {
     return -1; 
  }
  
}
