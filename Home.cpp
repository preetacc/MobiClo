#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main()
{
  textbackground(BLACK);
  textcolor(WHITE);
  clrscr();
    gotoxy(37,5);
      cout<<"MobiClo";
    for(int i=0; i<80; i++)
    {
      gotoxy(i,20);
        cout<<'._';
      delay(100);
    }
  getch();
}
