#include <iostream>
using namespace std;
void header();
void aggregate(float, float, float);
void student();

main()
{
header();
student();


}



void student()
{
  string name1;
  float matric1;
  float inter1;
  float ecat1;


  cout<< "Enter your name: ";
  cin>> name1;

  cout<< "Enter matric marks: ";
  cin>> matric1;

  cout<< "Enter inter marks: ";
  cin>> inter1;

  cout<< "Enter Ecat marks: ";
  cin>> ecat1; 

  float totalaggregate1 = (matric1 * 30)/1100 + (inter1 * 30)/550  + (ecat1 * 40)/400;

  cout<< "Your aggregate is: " << totalaggregate1 << endl;



  string name2;
  float matric2;
  float inter2;
  float ecat2;


  cout<< "Enter your name: ";
  cin>> name2;

  cout<< "Enter matric marks: ";
  cin>> matric2;

  cout<< "Enter inter marks: ";
  cin>> inter2;

  cout<< "Enter Ecat marks: ";
  cin>> ecat2; 

  float totalaggregate2 = (matric2 * 30)/1100 + (inter2 * 30)/550  + (ecat2 * 40)/400;

  cout<< "Your aggregate is: " << totalaggregate2 << endl;

  if (totalaggregate1 > totalaggregate2)
   {
      cout<<"first roll no is given to "<<name1;
   }
  if (totalaggregate2 > totalaggregate1)
   {
      cout<<"first roll no is given to "<<name2;
   }
}



void aggregate(float matric, float inter, float ecat)
{
  float totalaggregate = (matric * 30)/1100 + (inter * 30)/550  + (ecat * 40)/400;

  cout<< "Your aggregate is: " << totalaggregate << endl;
}


void header()
{
cout << "************************************"<<endl;
cout << "*       University Management      *" << endl;
cout << "*                                  *" << endl;
cout << "*              System              *" << endl;
cout << "*                                  *" << endl;
cout << "************************************"<<endl;


}