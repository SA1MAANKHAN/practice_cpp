#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x1 , x2 , y1 , y2 ;
    int dx ,dy ;
    int x ,y ;
    int P;


    cout << "Enter value of x1" <<endl;
    cin >> x1 ;
    cout << "Enter value of x2" <<endl ;
    cin >> x2 ;
    cout << "Enter value of y1" <<endl;
    cin >> y1 ;
    cout << "Enter value of y2" <<endl;
    cin >> y2 ;
    cout << "x1:" <<x1 <<"\tx2:"<< x2 <<"\ty1:"<<y1 <<"\ty2:"<<y2 ;

    x = x1 ;
    y = y1 ;
    dx = x2 - x2 ;
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
    getch();
}


