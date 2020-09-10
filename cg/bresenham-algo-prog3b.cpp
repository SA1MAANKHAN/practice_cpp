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
    int p;


    cout << "Enter value of x1" <<endl;
    cin >> x1 ;
    cout << "Enter value of x2" <<endl ;
    cin >> x2 ;
    cout << "Enter value of y1" <<endl;
    cin >> y1 ;
    cout << "Enter value of y2" <<endl;
    cin >> y2 ;
    cout << "x1:" <<x1 <<"\tx2:"<< x2 <<"\ty1:"<<y1 <<"\ty2:"<<y2 ;

    dx = x2 - x1 ;
    dy = y2 - y1 ;
    p = 2*dx - dy;
    putpixel(x1,y1,5);

    for (int k=0; k <dx ; k++){
        if(p<0){
            x1++;
            p = p + 2*dy;
        }else{
        x1++;
        y1++;
        p = p +2*dy - 2*dx;
        }
        putpixel(x1,y1,10);
        delay(50);

    }
    getch();
}



