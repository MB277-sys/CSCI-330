#ifndef FALLING_H
#define FALLING_H

#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std; 

void readFile(const string& filename, int grid[][3]); 

bool isMagicSquare(int grid[][3]); 

#endif
