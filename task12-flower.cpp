#include <iostream>
using namespace std;
void finalAmount(int, int , int);

main()
{
  int redrose;
  int whiterose;
  int tulips;
  while(true)
  {
  cout<< "Enter the numbers of red roses: ";
  cin>> redrose;

  cout<< "Enter the numbers of white roses: ";
  cin>> whiterose;

  cout<< "Enter the number of tuplips: ";
  cin>> tulips;

  finalAmount(redrose,whiterose ,tulips);
  }



}


void finalAmount(int redrose, int whiterose, int tulips)
{
  float redprice = 2.00;
  float whiteprice = 4.10;
  float tulipsprice = 2.50;


  float nodiscount = (redrose*redprice) + (whiterose*whiteprice) + (tulips * tulipsprice);


  if (nodiscount > 200 )
    {
        float discount = (nodiscount * 20)/100;
        float afterdiscount = nodiscount - discount;
        cout<<"Original Price: "<< nodiscount<< endl;
        cout<< "After discount: "<< afterdiscount <<endl;
     }

    if (nodiscount <= 200)
    {
        cout<< "Total price is: "<< nodiscount <<endl;
    }


}