#include <iostream>
using namespace std;

int main() {
  
  UserInput in;
  int classANum = in.readInt("How many class a tickets"); 
  int classBNum = in.readInt("How many class b tickets");
  int classCNum = in.readInt("How many class c tickets");
  double classA = classANum *15; 
  double classB = classANum *12;
  double classC = classANum *9;
  cout << classA << endl; 
  cout << classB << endl; 
  cout << classC << endl; 
  
  return 0;
}