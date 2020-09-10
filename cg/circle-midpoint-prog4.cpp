#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 int xc,yc,x,y,r,d;
 x = 0;
 y = r;
 d = 1-r;

 cout << "Enter radius" <<endl;
 cin >> r ;
 cout << "Enter center x" <<endl;
 cin >> xc ;
 cout << "Enter center y" <<endl ;
 cin >> yc ;

 do{
    putpixel(xc+x,yc+y,10);
    putpixel(xc+x,yc-y,10);
    putpixel(xc-x,yc+y,10);
    putpixel(xc-x,yc-y,10);
    putpixel(xc+y,yc+x,10);
    putpixel(xc+y,yc-x,10);
    putpixel(xc-y,yc+x,10);
    putpixel(xc-y,yc-x,10);
    //because of  octal symmetry of circle
    if(d<0){
        x = x+1;
        y = y;
        d = d + 2*x + 2;
    }
    else
        {
    x = x + 1;
    y = y - 1;
    d = d + 2*(x-y) + 1;
    }
 }while(x<y);

 getch();
}


