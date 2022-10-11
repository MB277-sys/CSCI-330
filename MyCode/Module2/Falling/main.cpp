#include <iostream>
#include <iomanip>
#include <cmath>
#include "functions.h"
#include "FileReader.h"
using namespace std;

int main() 
{
  try 
  {
  double dist= 0.00;
  FileReader f("times.txt");
  while(f.next()) 
  {
    double num = f.readDouble(); 
    dist = fallingDistance(num); 
    double nums = 1.00 * num; 
    cout <<dist<<".0 meters in "<< nums <<".00 seconds."<< endl;  
    }
  return 0;
  } 
  catch (const char * error) 
  {
  cout<<error<<endl;   
  return -1; 
  }
  
}
