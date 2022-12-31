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
  int y = 2;
  while(true)
  {
    if (y < 8)
    {
      movePlayer(x,y);
      gotoxy(x, y);
      cout<< "p";
      y = y+1;
    }
    if (y==8)
    { 
     
      gotoxy(x,y-1);
      cout<<" ";
      y = 2;
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
  gotoxy(x, y-1);
  cout<< " ";
  gotoxy(x, y);
  cout<< "p";
  Sleep(300);
}



