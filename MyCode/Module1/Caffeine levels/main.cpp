#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

int main()
{
   UserInput in;
   double caffeineMg = in.readDouble();
   cout << fixed << setprecision(2);
   cout << "After 6 hours: " << caffeineMg / 2 << " mg" << endl << "After 12 hours: " << caffeineMg / 4 << " mg" << endl << "After 18 hours: " << caffeineMg / 8 << " mg" << endl;

   return 0;
}
