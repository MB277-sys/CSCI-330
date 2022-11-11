#include <iostream>
#include "Filter.h"
#include "FileReader.h"
using namespace std;



// default ctor
Filter::Filter() :
  m_grade = "none";
  m_score = 0;
{
}

// copy ctor
Filter::Filter(const Filter & other) :
	m_grade(other.m_grade), m_grade(other.m_grade)
//m_year(other.m_year)
{

  Filter::Filter (const string& filename)

    string Pr1; 
      
      
    FileReader in(filename);
      while (in.next())
    	{
    		string line = in.readString(); 
      
      }


      
      {
      }

// dtor...
Filter::~Filter()
{

}
// to be filled in properly to fufill part 2 of assigment unsure of their function 
// maybe retrieving all instnace of a score?       
void Filter::minGrade(string grade)
{
   m_grade = grade;
   return;
}

// to be filled in properly to fufill part 2 of assigment unsure of their function 
void Filter::minScore(int score)
{
   m_score =  score;
   return;
}


