#include<graphics.h>
#include<dos.h>
#include<conio.h>

    void bresenhamLINE(){
    int x1=9 , x2=140 , y1=18 , y2=220 ;
    int dx ,dy ;
    int x ,y ;
    int P;

    x = x1 ;
    y = y1 ;
    dx = x2 - x1 ;
    dy = y2 - y1 ;
    P = 2*dx - dy;
    putpixel(x1,y1,5);

    while(x <= x2){
        putpixel(x,y,10);
        delay(50);
        x++;
        if(P<0)
        {
            P = P +2*dy;
        }else{
        P = P+ 2*dy - 2*dx;
        y++;
        }
    }
}
main()
{
    initwindow(800,800);
    bresenhamLINE();
    getch();
}


