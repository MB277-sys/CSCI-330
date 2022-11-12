#include <iostream>
#include "Filter.h"
#include "FileReader.h"
using namespace std;

// default ctor
Filter::Filter() :
	// m_month(1), m_day(1), m_year(2000)
{

}

// copy ctor
Filter::Filter(const string& filename) :

    string oname[48]; 
    FileReader in(filename);
    while (in.next())
    	{
            // read an entire row of text from the file
            // each row contains three values separated by a comma...
        string line = in.readString(); 

            // breaks the three values up and places
            // each value in the tokens array...
    		string tokens[48];
    		splitA(line, ',', tokens, 48);

        if(in.next()) 
        {
          for (int i=0; i<48; i++)
            {
              token[i] = oname[i];
            }
        }
        
      }
{
  
}

void Filter::minGrade(string grade)
{
   //m_itemQuantity = quantity;
   return;
}

void Filter::minScore(int score)
{
   //m_itemQuantity = quantity;
   return;
}
