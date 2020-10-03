#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
    initwindow(1520,820);

rectangle(20,20,705,705);

    line(200,20,300,705);
    line(230,20,230,200);
    line(230,290,230,470);
    line(290,230,470,230);
    line(260,20,260,200);
    line(260,290,260,470);
    line(290,20,290,470);
    line(20,200,470,200);
    line(20,230,200,230);
    line(290,230,470,230);
    line(20,260,200,260);
    line(290,260,470,260);
    line(20,290,470,290);
    line(200,200,290,290);
    line(200,290,290,200);

   rectangle(50,50,170,170);
   rectangle(55,55,165,165);
   rectangle(320,50,440,170);
   rectangle(325,55,435,165);
   rectangle(50,320,170,440);
   rectangle(55,325,165,435);
   rectangle(320,320,440,440);
   rectangle(325,325,435,435);

   getch();
}
