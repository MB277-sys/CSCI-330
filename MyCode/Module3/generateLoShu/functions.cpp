#include <iostream>
#include "functions.h"
using namespace std;

void swap(vector<int>& v, int x, int y)
{
   int temp = v[x];
   v[x] = v[y];
   v[y] = temp;
}

void shuffle(vector<int>& v)
{
  // move to main....
  //srand(time(NULL));

   int i1(0);
   int i2(0);
   for (unsigned int i(0); i < 10; i++)
   {
      do
      {
         i1 = rand() % v.size();     
         i2 = rand() % v.size();     
      } while (i1 == i2);
      
      swap(v, i1, i2);
   } 
}
  bool isMagicSquare(int grid[][3])
  {   
   bool yes = true;

   // test the first row to see if the values in each column
   // add up to 15... 
    yes = yes && (grid[0][0] + grid[0][1] + grid[0][2] == 15);

   // test the second row to see if the values in each column
   // add up to 15... 
    yes = yes && (grid[1][0] + grid[1][1] + grid[1][2] == 15);
 
   // test the third row to see if the values in each column
   // add up to 15... 
   yes = yes && (grid[2][0] + grid[2][1] + grid[2][2] == 15);


   // test the first column to see if the values in each column
   // add up to 15... 
  yes = yes && (grid[0][0] + grid[1][0] + grid[2][0] == 15);
 
   // test the second column to see if the values in each column
   // add up to 15... 
   yes = yes && (grid[0][1] + grid[1][1] + grid[2][1] == 15);


   // test the third column to see if the values in each column
   // add up to 15... 
   yes = yes && (grid[0][2] + grid[1][2] + grid[2][2] == 15); 

   // test the first diagonal (top left to bottom right)
   // to see if the values in each column
   // add up to 15... 
   yes = yes && (grid[0][0] + grid[1][1] + grid[2][2] == 15); 
   
   // test the second diagonal (top right to bottom left)
   // to see if the values in each column
   // add up to 15... 

   yes = yes && (grid[0][2] + grid[1][1] + grid[2][0] == 15);  
   
   return yes;
  }

void generateMagicSquare(int grid[][3])
  {
    vector<int> v; 
    for (unsigned int i(1); i < 10; i++)
      v.push_back(i);
   
   do
   {
      shuffle(v);

      grid[0][0] = v[0];
      grid[0][1] = v[1];
      grid[0][2] = v[2];

      grid[1][0] = v[3];
      grid[1][1] = v[4];
      grid[1][2] = v[5];

      grid[2][0] = v[6];
      grid[2][1] = v[7];
      grid[2][2] = v[8];

   } while (!isMagicSquare(grid));





    
    // for (unsigned i = 1; i < 10; i++) 
      // {
        // v.push_back(i); 
      // do 
        // {
          // shuffle(v); 
          // grid [0] [0] = v[0]; 
          // grid [0] [1] = v[1]; 
          // grid [0] [2] = v[2]; 
          // grid [1] [0] = v[3]; 
          // grid [1] [1] = v[4]; 
          // grid [1] [2] = v[5]; 
          // grid [2] [0] = v[6]; 
          // grid [2] [1] = v[7]; 
          // grid [2] [2] = v[8]; 
        // } while (!isMagicSquare(grid)); 
      // }
        
  }  