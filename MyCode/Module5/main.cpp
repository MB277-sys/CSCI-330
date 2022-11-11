#include <iostream>
#include <vector>
#include <string>
#include "functions.h"

using namespace std;

int main()
{
  string s1 = "Funny Frog";
  string s2 = "Happy Hippo";
  string s3 = "Awesome Ant";
  string s4 = "Beautiful Butterfly";
  string s5 = "Crazy Crab";

  vector<string *> things;
  things.push_back(&s2);
  things.push_back(&s1);
  things.push_back(&s3);
  things.push_back(&s5);
  things.push_back(&s4);
  things.push_back(&s4);
  things.push_back(&s1);
  things.push_back(&s5);

  followTheLine(things);
  
  /* should print: 
  Happy Hippo
  Funny Frog
  Awesome Ant
  Crazy Crab
  Beautiful Butterfly
  done
  done
  done
  */
}