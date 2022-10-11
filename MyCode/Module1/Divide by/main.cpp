#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;
int main(){
  
  UserInput in;
  int userNum = in.readDouble();
  int x = in.readDouble();

  userNum = userNum / x;
  cout << " " << userNum;   

  userNum = userNum / x;
  cout << " " << userNum; 
  
  userNum = userNum / x;
  cout << " " << userNum; 

  userNum = userNum / x;
  cout << " " << userNum; 
  
   return 0;
}
