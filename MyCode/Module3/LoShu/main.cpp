#include <iostream>
#include "functions.h"
#include "FileReader.h"
#include "helper.h"
using namespace std;

int main() 
{   
       int grid[3][3] = { {0,0,0},{0,0,0},{0,0,0} };  
   readFile("test.txt", grid);
    bool yes = isMagicSquare(grid); 
    if (yes == true) 
    {
      cout <<"Lo Shu"<< endl; 
    } 
  else if (yes == false) 
  {
    cout <<"No Lo Shu"<< endl; 
  }
   return 0;
}
