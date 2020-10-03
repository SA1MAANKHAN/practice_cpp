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
    int rx2 = rx*rx,
         ry2 = ry*ry,
         x=0,
         y=ry,
         p=0;

int ellipsePlotPoints(int xCenter, int yCenter ,int x ,int y );

   p =(int)(ry2-(rx2*ry)+(.25*rx2));

   while(2*ry2*x <2*rx2){
    x++;
    if(p<0)
        p+=(int)2*ry2*x+ry2;
    else{
        y--;
        p+=(int)2*ry2*x+ry2-2*rx2*y;
   }
ellipsePlotPoints(xCenter,yCenter,x,y);
   }
   p =(int)(ry2*(x+.5)*(x+.5)+rx2*(y-1)*(y-1)-rx2*ry2);

   while(y>0){
    y--;
    if(p>0){
        p+=rx2 - 2*rx2*y;
    }else{
        x++;
        p+rx2+2*ry2*x-2*rx2*y;
    }
int ellipsePlotPoints(int xCenter, int yCenter ,int x ,int y );

   }
}
void ellipsePlotPoints(int xCenter, int yCenter ,int x ,int y ){
    putpixel(xCenter+x,yCenter+y,4);
    putpixel(xCenter-x,yCenter+y,4);
    putpixel(xCenter+x,yCenter-y,4);
    putpixel(xCenter-x,yCenter-y,4);
 }
// https://www.youtube.com/watch?v=QjqI4cCVAx0
