#include <iostream>
using namespace std;

void compare(int first, int second);


main()
{
  int first;
  int second;
  cout << "Enter first number: ";
  cin>> first;
  
  cout<< "Enter second number: ";
  cin>> second;
  compare(first, second);


}


void compare(int first, int second)
{
  if (first == second)
    {
       cout<< "True";
    }
  if (first != second)
  {
    cout<< "False";
   }



}

