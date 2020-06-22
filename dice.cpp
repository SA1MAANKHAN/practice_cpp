#include<iostream>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
class dice
{
public:
    char dice_roll()
    {
           return rand()%5;
    };
};
int main()
{

    initwindow(400,400);
    dice obj;
    for (int i=0;i<10;i++)
    outtextxy(200,200,"you got"&rand()%5);
    getch();


}
