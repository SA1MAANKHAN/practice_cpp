#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;
void lineDDA()
    {
    int xa=200 ,xb=310 ,ya=400 ,yb=510;
    float x_inc , y_inc,x=xa,y=yb ;
    int step ;
    int dx ,dy ;
    dx = xb -xa;
    dy = yb -ya;
    if(abs(dx)>abs(dy)){
        step = abs(dx);
    }else{
        step = abs(dy);
    }
    x_inc = dx / step;
    y_inc = dy / step;
    for(int i=1;i<=step ; i++){
            putpixel(x , y ,5);
            x = x + x_inc;
            y = y + y_inc;
            }
}

main()
{
    initwindow(800,800);
    lineDDA();

    
getch();
}




