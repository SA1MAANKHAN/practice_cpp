#include<conio.h>
#include<graphics.h>
int main()
{

 initwindow(800,800);
 int xc=300,yc=300,x,y,r=200,d;
 x = 0;
 y = r;
 d = 1-r;

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


