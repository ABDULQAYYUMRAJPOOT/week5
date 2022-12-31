#include <iostream>
using namespace std;
#include <windows.h>
void gotoxy(int x, int y);
void printW();
void printI();
void printS();
void printA1();
void printA2();


main()
{


printA1();
printW();
printA2();
printI();
printS();


}


void printW()
{
gotoxy(60,13);
cout<< "###          ###";
gotoxy(60,14);
cout<< " ##          ##";
gotoxy(60,15);
cout<< " ##          ##";
gotoxy(60,16);
cout<< " ##     *    ##"  ;
gotoxy(60,17);
cout<< " ##   #  #   ##"  ;
gotoxy(60,18);
cout<< " ## #      # ##"  ;
gotoxy(60,19);
cout<< " ##          ##"  ;
}

void printI()
{
gotoxy(60,29);
cout<<  "   ####";
gotoxy(60,30);
cout<<  "    ##";
gotoxy(60,31);
cout<<  "    ##";
gotoxy(60,32);
cout<<  "    ##";
gotoxy(60,33);
cout<<  "    ##";
gotoxy(60,34);
cout<<  "    ##";
gotoxy(60,35);
cout<<  "    ##";
gotoxy(60,36);
cout<<  "   ####";
}

void printS()
{
gotoxy(60,38);
cout<< "     ###     ";
gotoxy(60,39);
cout<< "  ##     ##";
gotoxy(60,40);
cout<< "  ##     ";
gotoxy(60,41);
cout<< "    ##   ";
gotoxy(60,42);
cout<< "       ##   ";
gotoxy(60,43);
cout<< "         ##   ";
gotoxy(60,44);
cout<< "  ##    ##   ";
gotoxy(60,45);
cout<< "     ###   ";
}

void printA1(){
gotoxy(60,5);
cout<<"      ##     " <<endl;
gotoxy(60,6);
cout<<"    ##  ##  " <<endl;
gotoxy(60,7);
cout<<"   ##    ##  " <<endl;
gotoxy(60,8);
cout<<"   ##    ##  " <<endl;
gotoxy(60,9);
cout<<"   ## ## ##  " <<endl;
gotoxy(60,10);
cout<<"   ##    ##  " <<endl;
gotoxy(60,11);
cout<<"   ##    ##  " <<endl <<endl;

}

void printA2(){
gotoxy(60,21);
cout<<"      ##     " <<endl;
gotoxy(60,22);
cout<<"    ##  ##  " <<endl;
gotoxy(60,23);
cout<<"   ##    ##  " <<endl;
gotoxy(60,24);
cout<<"   ##    ##  " <<endl;
gotoxy(60,25);
cout<<"   ## ## ##  " <<endl;
gotoxy(60,26);
cout<<"   ##    ##  " <<endl;
gotoxy(60,27);
cout<<"   ##    ##  " <<endl <<endl;

}



void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}