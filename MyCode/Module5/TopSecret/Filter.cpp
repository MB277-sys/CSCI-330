#include <iostream>
#include "Filter.h"
#include "FileReader.h"
#include "helper.h"
using namespace std;

Filter::Filter(const string& filename) 
  {
    string m_grade; 
    int m_score; 
    string oname[48];
    int r=0;      
    FileReader in(filename);
    while (in.next())
    	{
    		string line = in.readString(); 
    		string tokens[48];
    		splitA(line, ',', tokens, 48);
        for(int i=0; i<48; i++) 
        {
          tokens[i]=oname[i];
        }
    		r++;
      }
    cout<<oname[0]<<endl; 
  }

// Filter::~Filter()
// {
// }

void Filter::minGrade(string grade) 
  {
    m_grade = grade;
   return;
}

void Filter::filter() 
  {
    if(m_score=800)
    {
      
    } else if(m_score=820)
    return; 
  }
  

void Filter::minScore(int score) 
{
    m_score = score;
   return;
}

ostream & operator<<(ostream & os, const Filter & x)
{

 // os << x.Filter(x);
	return os;
  
}
