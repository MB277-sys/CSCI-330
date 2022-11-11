#ifndef FILTER_H
#define FILTER_H

#include <fstream>
#include <algorithm>
#include <vector>
using namespace std; 

class Filter {

   private:
      string m_grade;
      int m_score;
     // int itemQu;


   public:
      Filter();  
      Filter (const string& filename); 
      void minGrade(string grade);
      void minScore(int minScore);  
};

#endif
