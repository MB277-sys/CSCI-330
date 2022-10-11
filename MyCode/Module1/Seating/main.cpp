#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

int main() {

 try {  
  UserInput in;
  int classANum = in.readInt(); 
  int classBNum = in.readInt();
  int classCNum = in.readInt();
  double classA = classANum *15; 
  double classB = classBNum *12;
  double classC = classCNum *9;
  double total = classA+classB+classC; 
  cout << fixed << setprecision(2); 
  cout << "Total = $" << total << endl;  

  return 0;

   } catch (const char * error) {
        cout <<"Please enter a valid integer."<<endl; 
        return -1; 
   
   }
   
}