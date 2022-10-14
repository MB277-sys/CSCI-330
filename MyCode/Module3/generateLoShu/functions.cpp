#include <iostream>
#include "functions.h"
using namespace std;

void generateMagicSquare(int grid[][3])
  {
   bool yes = false; 
   while (yes != true) 
    {
      vector<vector<int>> v; 
      {
          {1, 2, 3},
          {4, 5, 6},
          {7, 8, 9}
      };
    int row = 3; 
    int col = 3; 
    for (unsigned i = 0; i < row; i++) 
      {
        for (unsigned j = 0; j < col; i++) 
          {
            grid[i][j] = v[i][j];
          }
        
        yes = isMagicSquare(grid);

        if (yes == true) 
          {
            cout <<"Lo Shu"<< endl; 
          } 
        else if (yes == false) 
          {
            random_shuffle(v.begin(), v.end());
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

}
  
 