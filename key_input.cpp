#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
initwindow(800,800);
char ch;
int x=0,y=0;
ch=getch();
if(ch=='e')
{
outtextxy(x,y,"i");
x++,y++;
delay(10);
}
getch();
return 0;
}

