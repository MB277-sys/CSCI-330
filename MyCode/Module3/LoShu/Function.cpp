#include <iostream>
#include "Function.h"
#include "FileReader.h"
#include "helper.h"
using namespace std;

void readFile(const string& filename, int grid[][3])
{    
   try
   {
      int row(0);      
      FileReader in(filename);
       
      // while there is a row in the file....
      while (in.next())
    	{
            // read an entire row of text from the file
            // each row contains three values separated by a comma...
    		string line = in.readString(); 

            // breaks the three values up and places
            // each value in the tokens array...
    		string tokens[3];
    		splitA(line, ',', tokens, 3);

            // converts each item to an integer
            // and places it into the grid array
            // it does this for each of the three
            // items that were placed in tokens...
    		grid[row][0] = stoi(tokens[0]);
    		grid[row][1] = stoi(tokens[1]);
    		grid[row][2] = stoi(tokens[2]);

            // increment row so that we can do the same thing
            // all over again for the next row...

    		row++;
        }
    	return;
    }
    catch (const char * error)
    {
        cout << error << endl;
        return;
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
