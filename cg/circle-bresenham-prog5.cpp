#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void drawCircle(int x, int y, int xc, int yc);
int main()
{
                int gd = DETECT, gm;
                int r, xc, yc, pk, x, y;
                initgraph(&gd, &gm, "");
                cout << " Enter the values for center x and y" <<endl;
                cin>>xc>>yc;
                cout<<"Enter the radius of circle\n";
                cin>>r;
                pk = 3 - 2*r;
                x=0; y = r;
                drawCircle(x,y,xc,yc);
                while(x < y)
                {
                                if(pk <= 0)
                                {
                                                pk = pk + (4*x) + 6;
                                                drawCircle(++x,y,xc,yc);
                                }
                                else
                                {
                                                pk = pk + (4*(x-y)) + 10;
                                                drawCircle(++x,--y,xc,yc);
                                }
                }

                getch();
}

void drawCircle(int x, int y, int xc, int yc)
{
                putpixel(x+xc,y+yc,WHITE);
                putpixel(-x+xc,y+yc,WHITE);
                putpixel(x+xc, -y+yc,WHITE);
                putpixel(-x+xc, -y+yc, WHITE);
                putpixel(y+xc, x+yc, WHITE);
                putpixel(y+xc, -x+yc, WHITE);
                putpixel(-y+xc, x+yc, WHITE);
                putpixel(-y+xc, -x+yc, WHITE);
}
