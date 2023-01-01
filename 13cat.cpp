#include <iostream>
using namespace std;
void sleep(int, int);


main()
{
  int holidays;
  int daysInYear = 365;

  cout <<"Enter the holidays: ";
  cin>> holidays;  
  sleep(holidays,daysInYear);

}

void sleep(int holidays, int daysInYear)
{

  float days = daysInYear - holidays;
  float totalMinutes = days*63 + holidays * 127;
  float normDifference = 30000 - totalMinutes;
  float timeInHours = normDifference / 60;
  cout <<"";
  if (holidays > 50)
   {
       cout<<"Tom will run away "<< timeInHours<<" hours less for play." << endl;
    }
  if (holidays < 50)
   {
       cout<<"Tom will sleep well "<< timeInHours<<" hours for play." << endl;
    }

}