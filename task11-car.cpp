#include <iostream>
using namespace std;


void  challan(int speed);


main()
{
  int speed;
  while(true)
  {
  cout<< "Enter the speed: ";
  cin>> speed;
  challan(speed);
  }
}




void challan(int speed)
{
  if (speed == 100)
    {
        cout << "Good! You;re going well." << endl;
     }
   if (speed > 100)
   {
      cout << "HALT.... YOU WILL BE CHALLENGED!!!" << endl;
   }
}