#ifndef FILTER_H
#define FILTER_H

#include <fstream>
#include <algorithm>
#include <vector>
using namespace std; 

class Filter {
  public:
      Filter(const string& filename);      
      void minGrade(string grade);
      void minScore(int score);
      void filter(); 

    // virtual ~Filter();

   
    private:
     int x = 0;
      string oname[48];
      string line = "";
      string tokens[48];
      string m_grade; 
      int m_score; 
   //    string m_grade;
   //    double m_score;

	friend ostream & operator<<(ostream & os, const Filter & x);
};

ostream & operator<<(ostream & os, const Filter & x);


#endif
