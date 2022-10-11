#include <iostream>

#include "functions.h"

using namespace std;

int main()
{
	srand(792);
	
	try
	{
   	string winner("");
   	do
   	{
   		string cMove = computerMove();
   		string uMove = userMove();
   		cout << "Computer chooses " << cMove << endl;
   		winner = findWinner(cMove, uMove);
   		if (winner == "tie")
   			cout << "Tie, try again." << endl;
   	} while (winner == "tie");
   
   	cout << "The " << winner << " wins!" << endl;
	}
   catch (const char * err)
   {
      cout << "Error " << err << endl;
   }
	return 0;
}