#include<conio.h>
#include<graphics.h>
using namespace std;
void drawCircle(int x, int y, int xc, int yc);
int main()
{
                initwindow(800,800);
                int r=200, xc=400, yc=400, pk, x, y;
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


