#ifndef FILTER_H
#define FILTER_H

#include <fstream>
#include <algorithm>
#include <vector>
using namespace std; 

class Filter {
   
   public:
      Filter();   
	    Filter(const string& filename); 

	    virtual ~Filter();   
      void minScore(int score);
      void minGrade(string grade); 
      friend ostream & operator<<(ostream & os, const Filter & x);
};

#endif#endif
