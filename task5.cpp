#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printQ();
void printA();
void printY1();
void printY2();
void printU();
void printM();
main(){

  printQ();
  printA();
  printY1();
  printY2();
  printU();
  printM();



}
void printQ()
{
  gotoxy(60,5);
  cout<< "    ###     " ;
  gotoxy(60,6);
  cout<< " ##     ##  ";
  gotoxy(60,7);
  cout<< "##       ## ";
  gotoxy(60,8);
  cout<< "##       ## ";
  gotoxy(60,9);
  cout<< "##       ## ";
  gotoxy(60,10);
  cout<< "##       ## ";
  gotoxy(60,11);
  cout<< "##    ## ## ";
  gotoxy(60,12);
  cout<< "  ##   ##   ";
  gotoxy(60,13);
  cout<< "   ### ##   ";
  gotoxy(60,14);
  cout<< "        ### ";

}

void printA(){
  gotoxy(60,16);
cout<<"      ##     " ;
  gotoxy(60,17);
cout<<"    ##  ##  " ;
  gotoxy(60,18);
cout<<"   ##    ##  " ;
  gotoxy(60,19);
cout<<"   ##    ##  " ;
  gotoxy(60,20);
cout<<"   ## ## ##  " ;
  gotoxy(60,21);
cout<<"   ##    ##  " ;
  gotoxy(60,22);
cout<<"   ##    ##  " ;

}


void printY1()
{
  gotoxy(60,24);
cout<< "  ##     ##" ;
  gotoxy(60,25);
cout<< "   ##   ##" ;
  gotoxy(60,26);
cout<< "    ## ##" ;
  gotoxy(60,27);
cout<< "      #" ;
  gotoxy(60,28);
cout<< "      #" ;
  gotoxy(60,29);
cout<< "      #" ;
  gotoxy(60,30);
cout<< "      #" ;
}

void printY2()
{
  gotoxy(60,32);
cout<< "  ##     ##" ;
  gotoxy(60,33);
cout<< "   ##   ##" ;
  gotoxy(60,34);
cout<< "    ## ##" ;
  gotoxy(60,35);
cout<< "      #" ;
  gotoxy(60,36);
cout<< "      #" ;
  gotoxy(60,37);
cout<< "      #" ;
  gotoxy(60,38);
cout<< "      #" ;
}

void printU()
{
  gotoxy(60,40);
cout<< "##        ##";
  gotoxy(60,41);
cout<< "##        ##";
  gotoxy(60,42);
cout<< "##        ##";
  gotoxy(60,43);
cout<< "##        ##";
  gotoxy(60,44);
cout<< "##        ##";
  gotoxy(60,45);
cout<< " ###    ###";
  gotoxy(60,46);
cout<< "    ####";

}


void printM()
{
  gotoxy(60,48);
cout<< "##       ##";
  gotoxy(60,49);
cout<< "## #   # ##";
  gotoxy(60,50);
cout<< "##   #   ##";
  gotoxy(60,51);
cout<< "##       ##";
  gotoxy(60,52);
cout<< "##       ##";
  gotoxy(60,53);
cout<< "##       ##";
  gotoxy(60,54);
cout<< "##       ##";
}




void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}