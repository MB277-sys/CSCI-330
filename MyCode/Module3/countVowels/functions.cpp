#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"
using namespace std;

bool containsVowel(const vector<char>& v)
{
   bool check = false;
  
   check = check || find(v.begin(), v.end(), 'a') != v.end();
   check = check || find(v.begin(), v.end(), 'e') != v.end();
   check = check || find(v.begin(), v.end(), 'i') != v.end();
   check = check || find(v.begin(), v.end(), 'o') != v.end();
   check = check || find(v.begin(), v.end(), 'u') != v.end();

   check = check || find(v.begin(), v.end(), 'A') != v.end();
   check = check || find(v.begin(), v.end(), 'E') != v.end();
   check = check || find(v.begin(), v.end(), 'I') != v.end();
   check = check || find(v.begin(), v.end(), 'O') != v.end();
   check = check || find(v.begin(), v.end(), 'U') != v.end();
   
   return check;

}

 