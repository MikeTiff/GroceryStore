
//Written By: Michael Tiffany
#include<iostream>
#include<string>
using namespace std;

int main()
{  
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  int Pass = 0;
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(input == 'a' || input == 'A')
  {
  cout<<"What is the item?\n";

  }

  else if(input == 'q' || input == 'Q')
  {Pass = 1;
  }
    }
    while( Pass != 1);
    {
    }
  return 0;
}
