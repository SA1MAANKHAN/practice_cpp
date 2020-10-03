#include<iostream>
#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x1 , x2 , y1 , y2 ;
    int x_inc , y_inc ;
    int step ;
    int dx ,dy ;

    cout << "Enter value of x1" <<endl;
    cin >> x1 ;
    cout << "Enter value of x2" <<endl ;
    cin >> x2 ;
    cout << "Enter value of y1" <<endl;
    cin >> y1 ;
    cout << "Enter value of y2" <<endl;
   cin >> y2 ;
    cout << "x1:" <<x1 <<"\tx2:"<< x2 <<"\ty1:"<<y1 <<"\ty2:"<<y2 ;

    dx = x2 -x1;
    dy = y2 -y1;
    if(abs(dx)>abs(dy)){
        step = abs(dx);
    }else{
        step = abs(dy);
    }
    x_inc = dx / step;
    y_inc = dy / step;
    for(int i=1;i<=step ; i++){
            putpixel(x1 , y1 , 3);
            x1 = x1 + x_inc;
            y1 = y1 + y_inc;
            delay(50);

        }
    closegraph();
    return 0;
}

