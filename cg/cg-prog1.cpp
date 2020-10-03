#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //initwindow(1000,1000);
    //line
    line(5,5,100,100);
    //square
    rectangle(110,5,200,100);
    //rectangle
    rectangle(210,5,500,100);
    //circle
    circle(610 ,60,50);
    //ellipse
    ellipse(750 , 50 , 60 ,40,60 ,30);
    getch();
}
