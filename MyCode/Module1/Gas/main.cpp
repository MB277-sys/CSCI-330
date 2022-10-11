#include <iostream>
#include "UserInput.h"
using namespace std;

int main() {

  try {
  UserInput in;
  double tankmax = in.readInt();
  double miles = in.readInt();
  double mpg = miles/tankmax; 
  cout <<"MPG = "<< mpg;
  return 0;

  } catch (const char * error) {
      cout <<"Please enter a valid integer."<<endl;
      return -1;
   
   } 
}