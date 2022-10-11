#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

int main() {

  try{
  UserInput in;
  double cookieNum = in.readInt();
  double calPerCookie = 75.00; 
  double conCal = cookieNum * calPerCookie;
  //cout << fixed << setprecision(2); 
  cout <<"Calories = "<< conCal ;

  return 0;

  } catch (const char * error) {
    
        cout <<"Please enter a valid integer."<<endl;
        return -1;
   
   }
    
}