#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"
#include "UserInput.h"
using namespace std;

string computerMove() 
{
  srand(time(NULL));
  int compM = rand() % 3 + 1;
  string computer;
  
  if(compM == 1)
    {
      computer = "paper";
    }
  else if (compM == 2)
    {
      computer = "rock";
    }
  else if(compM == 3)
    {
    computer = "sciccors";
    } 
  return computer; 
}

string userMove()
  {
  bool valid = false;
  UserInput in;
  string userM = in.readString();
  do
  {
    cout<<"choose rock paper or sciccors"<<endl;
    if (userM == "paper")
    {
      valid = true;
    }
    else if (userM == "rock")
    {
      valid = true;
    }
    else if (userM == "sciccors")
    {
      valid = true;
    }
  } while (!valid);
return userM; 
}

string findWinner(string computer, string user)
   {
     
      if (userM == "rock" && compM == "paper") {
        cout << "computer wins paper covers rock"<< endl;
    }
    else if (userM == "paper" && compM == "sciccors") {
        cout << "computer wins scissors cuts paper"<< endl;
        
    }
    else if (userM == "sciccors" && compM == "rock") {
        cout << "computer wins rock crushes scissors"<< endl;
        
    }
    else if (userM == "rock" && compM == "sciccors") {
        cout << "user wins paper covers rock"<< endl;
        
    }
    else if (userM == "paper" && compM == "rock") {
        cout << "user wins paper covers rock"<< endl;
        
    }
    else if (userM == "sciccors" && compM == "paper") {
        cout << "user wins scissors cut paper"<< endl;
    }
    else{
        cout << "tie play again" << endl;
    }
  
  }


