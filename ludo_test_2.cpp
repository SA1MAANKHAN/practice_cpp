#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<dos.h> //delay
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

char input;
static int pos_green=0;
static int pos_blue=0;
static int pos_red=0;
static int pos_yellow=0;

int dice_num;

//winner box
//dice box   sol:     rand()%5+1 if =1 or 2 or 3....  print a dice correspondig to the value
//previous token delete
//each box movement show

class dice
{
public:
    int dice_val()
    {
        return rand()%6+1;
    }
};


class colourturn : virtual public dice
{
public:

dice d;


int  greenturn()
{

    int gx,gy;
    dice_num=d.dice_val();

    pos_green = pos_green + dice_num;
    switch (dice_num)
{
   case 1:
       settextstyle(8,0,5);
       outtextxy(1020,600,"1");
    break;
     case 2:
     settextstyle(8,0,5);
       outtextxy(1020,600,"2");
    break;
     case 3:
     settextstyle(8,0,5);
       outtextxy(1020,600,"3");
    break;
     case 4:
     settextstyle(8,0,5);
       outtextxy(1020,600,"4");
    break;
     case 5:
     settextstyle(8,0,5);
       outtextxy(1020,600,"5");
    break;
     case 6:
     settextstyle(8,0,5);
       outtextxy(1020,600,"6");
};
switch(pos_green)
{
case 1:
    gx = 81;
    gy =315 ;
break;
case 2:
    gx =  135  ;
    gy =  315  ;
     break;
case 3:

     gx = 189;
    gy = 315;
      break;
case 4:

     gx = 243;
    gy = 315;
     break;
case 5:

     gx =315 ;
    gy = 243;
     break;
case 6:

     gx = 315;
    gy = 189;
     break;
case 7:

     gx =315 ;
    gy = 135;
      break;
case 8:

     gx = 315;
    gy = 81;
     break;
case 9:

     gx = 315;
    gy = 27;
     break;
case 10:

     gx = 405;
    gy = 27;
     break;
case 11:

     gx = 495;
    gy = 27;
     break;
case 12:

 gx = 495;
    gy = 81;
 break;
case 13:

 gx = 495;
    gy = 135;
 break;
case 14:

 gx = 495;
    gy = 189;
 break;
case 15:

 gx = 495;
    gy = 243;
 break;
case 16:

 gx = 567;
    gy = 315;
 break;
case 17:

 gx = 621;
    gy = 315;
 break;
case 18:

 gx = 675;
    gy = 315;
 break;
case 19:

 gx = 729;
    gy = 315;
 break;
case 20:

 gx = 783;
    gy = 315;
 break;
case 21:

 gx = 783;
    gy = 405;
 break;
case 22:

 gx = 783;
    gy = 495;
 break;
case 23:

 gx = 729;
    gy = 495;
 break;
case 24:

 gx = 675;
    gy = 495;
 break;
case 25:

 gx = 621;
    gy = 495;
 break;
case 26:

 gx = 567;
    gy = 495;
 break;
case 27:

 gx = 495;
    gy = 567;
 break;
case 28:

 gx = 495;
    gy = 621;
 break;
case 29:

 gx = 495;
    gy = 675;
 break;
case 30:

 gx = 495;
    gy = 729;
 break;
case 31:

 gx = 495;
    gy = 783;
 break;
case 32:

 gx = 405;
    gy = 783;
 break;
case 33:

 gx = 315;
    gy =783 ;
 break;
case 34:

 gx = 315;
    gy =729 ;
 break;
case 35:

 gx = 315;
    gy = 675;
 break;
case 36:

 gx = 315;
    gy =621 ;
 break;
case 37:

 gx = 315;
    gy =567 ;
 break;
case 38:

 gx =243 ;
    gy = 495;
 break;
case 39:

 gx = 189;
    gy = 495;
 break;
case 40:

 gx = 135;
    gy = 495;
 break;
case 41:
 gx = 81;
    gy =495 ;
 break;
case 42:
 gx = 27;
    gy =495 ;
 break;
case 43:

 gx = 27;
    gy =405 ;
 break;
case 44:
 gx = 81;
    gy =405 ;
 break;
case 45:
 gx = 135;
    gy = 405;
 break;
case 46:
     gx = 189;
    gy = 405;
 break;
case 47:
    gx = 243;
    gy = 405;
 break;
}
     circle(gx,gy,20);
     setfillstyle(SOLID_FILL,GREEN);
     floodfill(gx,gy,WHITE);
};



int blueturn()
{

dice_num =d.dice_val();
pos_blue = pos_blue + dice_num;
switch (dice_num)
{
   case 1:
       settextstyle(8,0,5);
       outtextxy(1020,600,"1");
    break;
     case 2:
     settextstyle(8,0,5);
       outtextxy(1020,600,"2");
    break;
     case 3:
     settextstyle(8,0,5);
       outtextxy(1020,600,"3");
    break;
     case 4:
     settextstyle(8,0,5);
       outtextxy(1020,600,"4");
    break;
     case 5:
     settextstyle(8,0,5);
       outtextxy(1020,600,"5");
    break;
     case 6:
     settextstyle(8,0,5);
       outtextxy(1020,600,"6");
};
switch(pos_blue)
{
case 1:
 circle(495,81,20);
  setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,81,WHITE);
    break;
case 2:
    circle(495,135,20);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,135,WHITE);
    break;
case 3:
circle(495,189,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,189,WHITE);
    break;
case 4:
circle(495,243,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,243,WHITE);
    break;
case 5:
circle(567,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(567,315,WHITE);
    break;
case 6:
circle(621,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(621,315,WHITE);
    break;
case 7:
circle(675,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(675,315,WHITE);
    break;
case 8:
circle(729,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(729,315,WHITE);
    break;
case 9:
circle(783,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(783,315,WHITE);
    break;
case 10:
circle(783,405,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(783,405,WHITE);
    break;
case 11:
circle(783,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(783,495,WHITE);
    break;
case 12:
circle(729,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(729,495,WHITE);
    break;
case 13:
circle(675,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(675,495,WHITE);
    break;
case 14:
circle(621,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(621,495,WHITE);
    break;
case 15:
circle(567,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(567,495,WHITE);
    break;
case 16:
circle(495,567,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,567,WHITE);
    break;
case 17:
circle(495,621,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,621,WHITE);
    break;
case 18:
circle(495,675,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,675,WHITE);
    break;
case 19:
circle(495,729,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,729,WHITE);
    break;
case 20:
circle(495,783,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(495,783,WHITE);
    break;
case 21:
circle(405,783,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,783,WHITE);
    break;
case 22:
circle(315,783,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,783,WHITE);
    break;
case 23:
circle(315,729,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,729,WHITE);
    break;
case 24:
circle(315,675,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,675,WHITE);
    break;
case 25:
circle(315,621,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,621,WHITE);
    break;
case 26:
circle(315,567,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,567,WHITE);
    break;
case 27:
circle(243,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(243,495,WHITE);
    break;
case 28:
circle(189,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(189,495,WHITE);
    break;
case 29:
circle(135,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(135,495,WHITE);
    break;
case 30:
circle(81,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(81,495,WHITE);
    break;
case 31:
circle(27,495,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(27,495,WHITE);
    break;
case 32:
circle(27,405,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(27,405,WHITE);
    break;
case 33:
circle(27,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(27,315,WHITE);
    break;
case 34:
circle(81,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(81,315,WHITE);
    break;
case 35:
circle(135,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(135,315,WHITE);
    break;
case 36:
circle(189,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(189,315,WHITE);
    break;
case 37:
circle(243,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(243,315,WHITE);
    break;
case 38:
circle(315,243,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,243,WHITE);
    break;
case 39:
circle(315,189,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,189,WHITE);
    break;
case 40:
circle(315,135,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,135,WHITE);
    break;
case 41:
circle(315,81,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,81,WHITE);
    break;
case 42:
circle(315,27,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(315,27,WHITE);
    break;
case 43:
circle(405,27,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,27,WHITE);
    break;
case 44:
circle(405,81,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,81,WHITE);
    break;
case 45:
circle(405,135,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,135,WHITE);
    break;
case 46:
circle(405,189,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,189,WHITE);
    break;
case 47:
circle(405,243,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,243,WHITE);
    break;
}
    };



int redturn()
{

dice_num=d.dice_val();
pos_red = pos_red + dice_num;
switch (dice_num)
{
   case 1:
       settextstyle(8,0,5);
       outtextxy(1020,600,"1");
    break;
     case 2:
     settextstyle(8,0,5);
       outtextxy(1020,600,"2");
    break;
     case 3:
     settextstyle(8,0,5);
       outtextxy(1020,600,"3");
    break;
     case 4:
     settextstyle(8,0,5);
       outtextxy(1020,600,"4");
    break;
     case 5:
     settextstyle(8,0,5);
       outtextxy(1020,600,"5");
    break;
     case 6:
     settextstyle(8,0,5);
       outtextxy(1020,600,"6");
};
switch(pos_red)
{
case 1:
circle(729,495,20);
 setfillstyle(SOLID_FILL,RED);
    floodfill(729,495,WHITE);
    break;
case 2:
circle(675,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(675,495,WHITE);
    break;
case 3:
circle(621,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(621,495,WHITE);
    break;
case 4:
circle(567,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(567,495,WHITE);
    break;
case 5:
circle(495,567,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,567,WHITE);
    break;
case 6:
circle(495,621,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,621,WHITE);
    break;
case 7:
circle(495,675,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,675,WHITE);
    break;
case 8:
circle(495,729,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,729,WHITE);
    break;
case 9:
circle(495,783,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,783,WHITE);
    break;
case 10:
circle(405,783,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(405,783,WHITE);
    break;
case 11:
circle(315,783,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,783,WHITE);
    break;
case 12:
circle(315,729,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,729,WHITE);
    break;
case 13:
circle(315,675,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,675,WHITE);
    break;
case 14:
circle(315,621,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,621,WHITE);
    break;
case 15:
circle(315,567,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,567,WHITE);
    break;
case 16:
circle(243,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(243,495,WHITE);
    break;
case 17:
circle(189,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(189,495,WHITE);
    break;
case 18:
circle(135,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(135,495,WHITE);
    break;
case 19:
circle(81,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(81,495,WHITE);
    break;
case 20:
circle(27,495,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(27,495,WHITE);
    break;
case 21:
circle(27,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(27,405,WHITE);
    break;
case 22:
circle(27,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(27,315,WHITE);
    break;
case 23:
circle(81,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(81,315,WHITE);
    break;
case 24:
circle(135,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(135,315,WHITE);
    break;
case 25:
circle(189,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(189,315,WHITE);
    break;
case 26:
circle(243,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(243,315,WHITE);
    break;
case 27:
circle(315,243,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,243,WHITE);
    break;
case 28:
circle(315,189,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,189,WHITE);
    break;
case 29:
circle(315,135,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,135,WHITE);
    break;
case 30:
circle(315,81,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,81,WHITE);
    break;
case 31:
circle(315,27,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(315,27,WHITE);
    break;
case 32:
circle(405,27,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(405,27,WHITE);
    break;
case 33:
circle(495,27,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,27,WHITE);
    break;
case 34:
circle(495,81,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,81,WHITE);
    break;
case 35:
circle(495,135,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,135,WHITE);
    break;
case 36:
circle(495,189,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,189,WHITE);
    break;
case 37:
circle(495,243,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,243,WHITE);
    break;
case 38:
circle(567,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(567,315,WHITE);
    break;
case 39:
circle(621,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(621,315,WHITE);
    break;
case 40:
circle(675,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(675,315,WHITE);
    break;
case 41:
circle(729,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(729,315,WHITE);
    break;
case 42:
circle(783,315,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(783,315,WHITE);
    break;
case 43:
circle(783,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(783,405,WHITE);
    break;
case 44:
circle(729,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(729,405,WHITE);
    break;
case 45:
circle(675,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(675,405,WHITE);
    break;
case 46:
circle(621,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(621,405,WHITE);
    break;
case 47:
circle(567,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(567,405,WHITE);
    break;

}
       };


int yellowturn()
{

dice_num=d.dice_val();

pos_yellow = pos_yellow + dice_num;

switch (dice_num)
{
   case 1:
       settextstyle(8,0,5);
       outtextxy(1020,600,"1");
    break;
     case 2:
     settextstyle(8,0,5);
       outtextxy(1020,600,"2");
    break;
     case 3:
     settextstyle(8,0,5);
       outtextxy(1020,600,"3");
    break;
     case 4:
     settextstyle(8,0,5);
       outtextxy(1020,600,"4");
    break;
     case 5:
     settextstyle(8,0,5);
       outtextxy(1020,600,"5");
    break;
     case 6:
     settextstyle(8,0,5);
       outtextxy(1020,600,"6");
};
switch(pos_yellow)
{
case 1:
circle(315,729,20);
 setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,729,WHITE);
    break;
case 2:
circle(315,675,20);
  setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,675,WHITE);
    break;
case 3:
circle(315,621,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,621,WHITE);
    break;
case 4:
circle(315,567,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,567,WHITE);
    break;
case 5:
circle(243,495,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(243,495,WHITE);
    break;
case 6:
circle(189,495,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(189,495,WHITE);
    break;
case 7:
circle(135,495,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(135,495,WHITE);
    break;
case 8:
circle(81,495,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(81,495,WHITE);
    break;
case 9:
circle(27,495,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(27,495,WHITE);
    break;
case 10:
circle(27,405,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(27,405,WHITE);
    break;
case 11:
circle(27,315,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(27,315,WHITE);
    break;
case 12:
circle(81,315,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(81,315,WHITE);
    break;
case 13:
circle(135,315,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(135,315,WHITE);
    break;
case 14:
circle(189,315,20);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(189,315,WHITE);
    break;
case 15:
circle(243,315,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(243,315,WHITE);
    break;
case 16:
circle(315,243,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,243,WHITE);
    break;
case 17:
circle(315,189,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,189,WHITE);
    break;
case 18:
circle(315,135,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,135,WHITE);
    break;
case 19:
circle(315,81,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,81,WHITE);
    break;
case 20:
circle(315,27,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(315,27,WHITE);
    break;
case 21:
circle(405,27,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,27,WHITE);
    break;
case 22:
circle(495,27,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,27,WHITE);
    break;
case 23:
circle(495,81,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,81,WHITE);
    break;
case 24:
circle(495,135,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,135,WHITE);
    break;
case 25:
circle(495,189,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,189,WHITE);
    break;
case 26:
circle(495,243,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,243,WHITE);
    break;
case 27:
circle(567,315,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(567,315,WHITE);
    break;
case 28:
circle(621,315,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(621,315,WHITE);
    break;
case 29:
circle(675,315,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(675,315,WHITE);
    break;
case 30:
circle(729,315,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(729,315,WHITE);
    break;
case 31:
circle(783,315,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(783,315,WHITE);
    break;
case 32:
circle(783,405,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(783,405,WHITE);
    break;
case 33:
circle(783,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(783,495,WHITE);
    break;
case 34:
circle(729,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(729,495,WHITE);
    break;
case 35:
circle(675,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(675,495,WHITE);
    break;
case 36:
circle(621,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(621,495,WHITE);
    break;
case 37:
circle(567,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(567,495,WHITE);
    break;
case 38:
circle(495,567,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,567,WHITE);
    break;
case 39:
circle(495,621,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,621,WHITE);
    break;
case 40:
circle(495,675,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,675,WHITE);
    break;
case 41:
circle(495,729,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,729,WHITE);
    break;
case 42:
circle(495,783,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(495,783,WHITE);
    break;
case 43:
circle(405,783,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,783,WHITE);
    break;
case 44:
circle(405,729,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,729,WHITE);
    break;
case 45:
circle(405,675,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,675,WHITE);
    break;
case 46:
circle(405,621,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,621,WHITE);
    break;
case 47:
circle(405,567,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,567,WHITE);
    break;
}
};
};
class cut{};

int main()
{
    //to get truly random values
    srand(time(0));



    //initialise variale and object
    int turn=0;
    colourturn t;

   //window size
    initwindow(1520,825);

   //ludo board boundary
    rectangle(0,0,810,810);

    // 4 players rectangle
    rectangle(5,5,265,265);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(10,10,WHITE);
    rectangle(545,5,805,265);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(550,10,WHITE);
    rectangle(545,545,805,805);
    setfillstyle(SOLID_FILL,RED);
    floodfill(550,550,WHITE);
    rectangle(5,545,265,805);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(10,550,WHITE);

    //small box lines
    line(54,270,54,540);
    line(108,270,108,540);
    line(162,270,162,540);
    line(216,270,216,540);

    line(270,54,540,54);
    line(270,108,540,108);
    line(270,162,540,162);
    line(270,216,540,216);

    line(594,270,594,540);
    line(648,270,648,540);
    line(702,270,702,540);
    line(756,270,756,540);


    line(270,594,540,594);
    line(270,648,540,648);
    line(270,702,540,702);
    line(270,756,540,756);

//info
rectangle(1000,100,1300,400);
outtextxy(1000,100,"INSTRUCTIONS : ");
outtextxy(1010,140,"1.  Each player gets 1 token");
outtextxy(1010,160,"2.  Wait for your turn");
outtextxy(1010,180,"3.  Press s for next turn");
outtextxy(1010,200,"4.  Use X  to close the game");
outtextxy(1010,220,"5.  Our dice is invisible for the time being");
outtextxy(1010,300,"ENJOY THE GAME!!");

//dice
outtextxy(1000,580,"DICE");
rectangle(1000,600,1050,650);

// safe circles
     circle(81,495,20);
      setfillstyle(SOLID_FILL,BROWN);
    floodfill(81,495,WHITE);
     circle(315,81,20);
     setfillstyle(SOLID_FILL,BROWN);
    floodfill(315,81,WHITE);
     circle(729,315,20);
     setfillstyle(SOLID_FILL,BROWN);
    floodfill(729,315,WHITE);
     circle(495,729,20);
     setfillstyle(SOLID_FILL,BROWN);
    floodfill(495,729,WHITE);


    line(270,0,270,810);
    line(540,0,540,810);
    line(0,270,810,270);
    line(0,540,810,540);

    line(0,360,270,360);
    line(0,450,270,450);
    line(540,360,810,360);
    line(540,450,810,450);

    line(360,0,360,270);
    line(450,0,450,270);
    line(360,540,360,810);
    line(450,540,450,810);

    line(270,270,540,540);
    line(270,540,540,270);


//width of token circles
    setlinestyle(SOLID_FILL,THICK_WIDTH,5);

 //token circles
    circle(90,90,35);
    circle(180,90,35);
    circle(90,180,35);
    circle(180,180,35);

    circle(630,90,35);
    circle(630,180,35);
    circle(720,90,35);
    circle(720,180,35);

    circle(90,630,35);
    circle(90,720,35);
    circle(180,630,35);
    circle(180,720,35);

    circle(630,630,35);
    circle(630,720,35);
    circle(720,630,35);
    circle(720,720,35);


  //winner box
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(400,405,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,400,WHITE);

    setfillstyle(SOLID_FILL,RED);
    floodfill(410,405,WHITE);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,410,WHITE);



// green entrance
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,280,WHITE);

      setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,370,WHITE);

      setfillstyle(SOLID_FILL,GREEN);
    floodfill(135,370,WHITE);

     setfillstyle(SOLID_FILL,GREEN);
    floodfill(189,370,WHITE);

      setfillstyle(SOLID_FILL,GREEN);
    floodfill(243,370,WHITE);



    // blue entrance
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,104,WHITE);

      setfillstyle(SOLID_FILL,BLUE);
    floodfill(470,104,WHITE);

      setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,158,WHITE);

     setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,212,WHITE);

      setfillstyle(SOLID_FILL,BLUE);
    floodfill(390,266,WHITE);


      // RED entrance
     setfillstyle(SOLID_FILL,RED);
    floodfill(750,390,WHITE);

      setfillstyle(SOLID_FILL,RED);
    floodfill(700,390,WHITE);

      setfillstyle(SOLID_FILL,RED);
    floodfill(630,390,WHITE);

     setfillstyle(SOLID_FILL,RED);
    floodfill(570,390,WHITE);

      setfillstyle(SOLID_FILL,RED);
    floodfill(750,460,WHITE);


    // YELLOW entrance
     setfillstyle(SOLID_FILL,YELLOW);
    floodfill(320,750,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,750,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,700,WHITE);

     setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,640,WHITE);

      setfillstyle(SOLID_FILL,YELLOW);
    floodfill(400,590,WHITE);


    //turn
while(pos_blue!=47||pos_green!=47||pos_red!=47||pos_yellow!=47)
{
char roll;
roll=getch();
if(roll=='s'||'S')
     if(turn<=4)
    {
    turn++;
    }
    else
    {
    turn=1;
    }
switch(turn)
    {
    case 1:
        t.greenturn();
            PlaySoundA(TEXT("D:\\project\\Boing-sound.wav"),NULL,SND_SYNC);
            break;
    case 2:
        t.blueturn();
            PlaySoundA(TEXT("D:\\project\\Boing-sound.wav"),NULL,SND_SYNC);
            break;
    case 3:
        t.redturn();
            PlaySoundA(TEXT("D:\\project\\Boing-sound.wav"),NULL,SND_SYNC);
          break;
    case 4:
        t.yellowturn();
            PlaySoundA(TEXT("D:\\project\\Boing-sound.wav"),NULL,SND_SYNC);


    };
}
//winner box
if (pos_blue==47)
{
    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");
}
else if (pos_green==47)
{
    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");
}
else if (pos_red==47)
{
    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");
}
else{
     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");
}
}

