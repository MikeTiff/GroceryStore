
//Written By: Michael Tiffany
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{ 
  vector<string> list;
  int x;     
  char input;
  do
 {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if (input == 'a' || input == 'A')
   {
   cout<<"What is the item?\n";
   string item;
   cin>>item;
   list.push_back(item);
   }
 }
 while (input != 'q' && input != 'Q');
  {
    if (list.empty() == true)
    {
     cout<<"No items to buy!\n";
    }
    else
    {
    cout<<"==ITEMS TO BUY==\n";
    for (x=0; x < list.size(); x++)
     {
      cout<<list[x]<<endl;
     }
    }
  }
  return 0;
}
