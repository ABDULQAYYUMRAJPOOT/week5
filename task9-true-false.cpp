#include <iostream>
using namespace std;

void changer(string input);

main()
{

  string input;
  cout<< "Enter true or false: ";
  cin>> input;
  changer(input);



}

void changer(string input)
{
  if (input == "true")
  {
    cout<<"False";
  }
  if (input == "false")
  {
    cout << "True";
  }


}