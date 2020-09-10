#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

void bresenhamEllipse(int, int , int ,int );
void ellipsePlotPoints(int, int , int ,int );

int main(){
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"");
     bresenhamEllipse(300,300,60,80);
     getch();
}
void bresenhamEllipse(int xCenter, int yCenter , int rx,int ry ){
    long rx2 = rx*rx,
         ry2 = ry*ry,
         x=0,
         y=ry,
         p=0;

void ellipsePlotPoints(int xCenter, int yCenter , x ,y , BLUE );
   p =(int)(ry2-(rx2*ry)+(.25*rx2));
   while(y>0){
    y--;
    if(p>0){
        p+=rx2 - 2*rx2*y;
    }else{
        x++;
        p+rx2+2*ry2*x-2*rx2*y;
    }
   void ellipsePlotPoints(int xCenter, int yCenter , x ,y , RED );

   }
}
void ellipsePlotPoints(int xCenter, int yCenter ,int x ,int y , int color ){
    putpixel(xCenter+x,yCenter+y,color);
    putpixel(xCenter-x,yCenter+y,color);
    putpixel(xCenter+x,yCenter-y,color);
    putpixel(xCenter-x,yCenter-y,color);
 }
//still pending https://www.youtube.com/watch?v=QjqI4cCVAx0
