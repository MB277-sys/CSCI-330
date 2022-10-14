#ifndef GENERATELOSHU_H
#define GENERATELOSHU_H

#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <random>
using namespace std; 

void generateMagicSquare(int grid[][3]); 

bool isMagicSquare(int grid[][3]); 

void swap(vector<int>& v, int x, int y);

void shuffle(vector<int>& v);

#endif
