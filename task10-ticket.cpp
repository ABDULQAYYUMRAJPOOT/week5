#include <iostream>
using namespace std;

void totalprice(string countryName, int amount);

main()
{
  string countryName;
  int amount;
  while(true)
  {
  cout<< "Enter country name: ";
  cin>> countryName;

  cout<< "Enter amount of ticket: ";
  cin>> amount;

  totalprice( countryName, amount);
  }
}

void totalprice(string countryName, int amount)
{
  if (countryName == "pakistan")
    {  
      
       int discount = (amount*5)/100;
       int price = amount - discount;
       cout << "Total ticket price is: "<< price  << endl;
    }

   if (countryName == "ireland")
   {
       int discount = (amount*10)/100;
       int price = amount - discount;
       cout << "Total ticket price is: "<< price  << endl; 
   }

   if (countryName == "india")
   {
       int discount = (amount*20)/100;
       int price = amount - discount;
       cout << "Total ticket price is: "<< price << endl; 
   }

    if (countryName == "england")
   {
       int discount = (amount*30)/100;
       int price = amount - discount;
       cout << "Total ticket price is: "<< price << endl; 
   }

    if (countryName == "canada")
   {
       int discount = (amount*45)/100;
       int price = amount - discount;
       cout << "Total ticket price is: "<< price << endl; 
   }
 
}


