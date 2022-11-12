#include <iostream>
//#include "Filter.h"
#include "FileReader.h"
#include <sstream>
#include <string>
#include <vector>

int main()
{

  string oname[48]; 
  ifstream fin;
  fin.open("applicants.txt");
  
  string a; 
  int i =0; 
  string tokens[48]; 
  
   if(fin.is_open()){
	 	for(int i = 0; i < 48; i++){
	 		fin >> oname[i];
	 	}

	 }

  cout << oname[0] << endl;
  cout << oname[1]<< endl;
  cout << oname[2]<< endl;
  cout << oname[3]<< endl;

}