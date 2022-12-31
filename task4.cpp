#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void movePlayer(int, int);
void gotoxy(int x, int y);
main()
{
  system("cls");
  printMaze();
  int x =3;
  int y = 4;
  while(true)
  {
    if (x < 20)
    {
      movePlayer(x,y);
      gotoxy(x, y);
      cout<< "p";
      x = x+1;
    }
    if (x==20)
    { 
     
      gotoxy(x-1,y);
      cout<<" ";
      x = 3;
    }
  }
}


void printMaze()
{
  cout << "###############################"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "#                             #"<< endl;
  cout << "###############################"<< endl;
}



void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}



void movePlayer(int x, int y)
{
  gotoxy(x-1, y);
  cout<< " ";
  gotoxy(x, y);
  cout<< "p";
  Sleep(300);
}



