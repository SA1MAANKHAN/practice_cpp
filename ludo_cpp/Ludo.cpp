
#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<dos.h> //delay
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

static int pos_green = 0;
int starter_green = 0;
static int pos_blue = 0;
int starter_blue = 0;
static int pos_red = 0;
int starter_red = 0;
static int pos_yellow = 0;
int starter_yellow = 0;

int flag_win_green=0;
int flag_win_blue=0;
int flag_win_red=0;
int flag_win_yellow=0;

int dice_num;

//winner box
//previous token delete
//each box movement show
//add delay after winning
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


    dice_num=d.dice_val();

    pos_green = pos_green + dice_num;

    //token turns white on start
    if (pos_green!=0)
       circle(90,90,35);
       setfillstyle(SOLID_FILL,WHITE);
       floodfill(90,90,WHITE);

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
    circle(81,315,20);
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,315,WHITE);
     break;
case 2:
    circle(135,315,20);
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(135,315,WHITE);
     break;
case 3:
    circle(189,315,20);
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(189,315,WHITE);
     break;
case 4:
    circle(243,315,20);
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(243,315,WHITE);
     break;
case 5:
    circle(315,243,20);
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,243,WHITE);
     break;
case 6:
    circle(315,189,20);
     setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,189,WHITE);
     break;
case 7:
    circle(315,135,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,135,WHITE);
      break;
case 8:
    circle(315,81,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,81,WHITE);
     break;
case 9:
    circle(315,27,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,27,WHITE);
     break;
case 10:
    circle(405,27,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(405,27,WHITE);
     break;
case 11:
    circle(495,27,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,27,WHITE);
     break;
case 12:
    circle(495,81,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,81,WHITE);
 break;
case 13:
    circle(495,135,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,135,WHITE);
 break;
case 14:
    circle(495,189,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,189,WHITE);
 break;
case 15:
    circle(495,243,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,243,WHITE);
 break;
case 16:
    circle(567,315,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(567,315,WHITE);
 break;
case 17:
    circle(621,315,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(621,315,WHITE);
 break;
case 18:
    circle(675,315,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(675,315,WHITE);
 break;
case 19:
    circle(729,315,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(729,315,WHITE);
 break;
case 20:
    circle(783,315,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(783,315,WHITE);
 break;
case 21:
    circle(783,405,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(783,405,WHITE);
 break;
case 22:
    circle(783,495,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(783,495,WHITE);
 break;
case 23:
    circle(729,495,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(729,495,WHITE);
 break;
case 24:
    circle(675,495,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(675,495,WHITE);
 break;
case 25:
    circle(621,495,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(621,495,WHITE);
 break;
case 26:
    circle(567,495,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(567,495,WHITE);
 break;
case 27:
    circle(495,567,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,567,WHITE);
 break;
case 28:
    circle(495,621,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,621,WHITE);
 break;
case 29:
    circle(495,675,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,675,WHITE);
 break;
case 30:
    circle(495,729,20);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,729,WHITE);
 break;
case 31:
    circle(495,783,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(495,783,WHITE);
 break;
case 32:
    circle(405,783,20);
  setfillstyle(SOLID_FILL,GREEN);
    floodfill(405,783,WHITE);
 break;
case 33:
    circle(315,783,20);
  setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,783,WHITE);
 break;
case 34:
    circle(315,729,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,729,WHITE);
 break;
case 35:
    circle(315,675,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,675,WHITE);
 break;
case 36:
    circle(315,621,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,621,WHITE);
 break;
case 37:
    circle(315,567,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,567,WHITE);
 break;
case 38:
    circle(243,495,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(243,495,WHITE);
 break;
case 39:
    circle(189,495,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(189,495,WHITE);
 break;
case 40:
    circle(135,495,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(135,495,WHITE);
 break;
case 41:
    circle(81,495,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,495,WHITE);
 break;
case 42:
    circle(27,495,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(27,495,WHITE);
 break;
case 43:
    circle(27,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(27,405,WHITE);
 break;
case 44:
    circle(81,405,20);
setfillstyle(SOLID_FILL,GREEN);
    floodfill(81,405,WHITE);
 break;
case 45:
    circle(135,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(135,405,WHITE);
 break;
case 46:
    circle(189,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(189,405,WHITE);
 break;
case 47:
    circle(243,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(243,405,WHITE);
 break;

 //after this token move , only winner will be printed
       case 48:
           if( flag_win_green==0 )
      {
          circle(315,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");

      flag_win_green++; //flag val changed
      }
       case 49:
                  if( flag_win_green==0 )
      {
          circle(315,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");

      flag_win_green++; //flag val changed
      }
       case 50:
        if( flag_win_green==0 )
      {
          circle(315,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");

      flag_win_green++; //flag val changed
      }
       case 51:
        if( flag_win_green==0 )
      {
          circle(315,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");

      flag_win_green++; //flag val changed
      }
       case 52:
        if( flag_win_green==0 )
      {
          circle(315,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");

      flag_win_green++; //flag val changed
      }
       case 53:
         if( flag_win_green==0 )
      {
          circle(315,405,20);
 setfillstyle(SOLID_FILL,GREEN);
    floodfill(315,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"GREEN WON !!");

      flag_win_green++; //flag val changed
      }
}
};

int blueturn()
{

dice_num =d.dice_val();
pos_blue = pos_blue + dice_num;

  //token turns white on start
  if (pos_blue!=0 )
         circle(630,90,35);
      setfillstyle(SOLID_FILL,WHITE);
    floodfill(630,90,WHITE);

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
case
 25:
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

    //after this token move , only winner will be printed
       case 48:
           if( flag_win_blue==0 )
      {
            circle(405,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,315,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");

      flag_win_blue++; //flag val changed
      }
       case 49:
             if( flag_win_blue==0 )
      {
            circle(405,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,315,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");

      flag_win_blue++; //flag val changed
      }
       case 50:
          if( flag_win_blue==0 )
      {
            circle(405,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,315,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");

      flag_win_blue++; //flag val changed
      }
       case 51:
             if( flag_win_blue==0 )
      {
            circle(405,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,315,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");

      flag_win_blue++; //flag val changed
      }
       case 52:
             if( flag_win_blue==0 )
      {
            circle(405,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,315,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");

      flag_win_blue++; //flag val changed
      }
       case 53:
            if( flag_win_blue==0 )
      {
            circle(405,315,20);
     setfillstyle(SOLID_FILL,BLUE);
    floodfill(405,315,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"BLUE WON !!");

      flag_win_blue++; //flag val changed
      }
}
    };



int redturn()
{

dice_num=d.dice_val();
pos_red = pos_red + dice_num;

  //token turns white on start
  if (pos_red!=0 )
           circle(630,630,35);
      setfillstyle(SOLID_FILL,WHITE);
    floodfill(630,630,WHITE);

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

    //after this token move , only winner will be printed
       case 48:
        if( flag_win_red==0 )
      {
       circle(495,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");

      flag_win_red++; //flag val changed
      }


       case 49:
      if( flag_win_red==0 )
      {
       circle(495,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");

      flag_win_red++; //flag val changed
      }
       case 50:
        if( flag_win_red==0 )
      {
       circle(495,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");

      flag_win_red++; //flag val changed
      }
       case 51:
      if( flag_win_red==0 )
      {
       circle(495,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");

      flag_win_red++; //flag val changed
      }
       case 52:
        if( flag_win_red==0 )
      {
       circle(495,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");

      flag_win_red++; //flag val changed
      }
       case 53:
        if( flag_win_red==0 )
      {
       circle(495,405,20);
     setfillstyle(SOLID_FILL,RED);
    floodfill(495,405,WHITE);

     rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"RED WON !!");

      flag_win_red++; //flag val changed
      }

}
       };


int yellowturn()
{

dice_num=d.dice_val();

pos_yellow = pos_yellow + dice_num;

  //token turns white on start
  if (pos_yellow!=0 )
          circle(90,630,35);
      setfillstyle(SOLID_FILL,WHITE);
    floodfill(90,630,WHITE);


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


//after this token move , only winner will be printed
       case 48:
       if( flag_win_yellow==0 )
      {
         circle(405,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,495,WHITE);

    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");

      flag_win_yellow++; //flag val changed
      }
       case 49:
      if( flag_win_yellow==0 )
      {
         circle(405,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,495,WHITE);

    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");

      flag_win_yellow++; //flag val changed
      }
       case 50:
       if( flag_win_yellow==0 )
      {
         circle(405,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,495,WHITE);

    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");

      flag_win_yellow++; //flag val changed
      }
       case 51:
        if( flag_win_yellow==0 )
      {
         circle(405,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,495,WHITE);

    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");

      flag_win_yellow++; //flag val changed
      }
       case 52:
        if( flag_win_yellow==0 )
      {
         circle(405,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,495,WHITE);

    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");

      flag_win_yellow++; //flag val changed
      }
       case 53:
       if( flag_win_yellow==0 )
      {
         circle(405,495,20);
setfillstyle(SOLID_FILL,YELLOW);
    floodfill(405,495,WHITE);

    rectangle(1000,420,1400,480);
    settextstyle(8,0,5);
       outtextxy(1020,430,"YELLOW WON !!");

      flag_win_yellow++; //flag val changed
      }
}
};
};
class cut{}; //test equality using two variables that become equal to each other at some point of time

int main()
{
    //to get truly random values
    srand(time(0));



    //initializse\ variable and object
    int turn=0;
    colourturn t;

   //window size
    initwindow(1520,825);

   //ludo board boundary
    rectangle(0,0,810,810);

   settextstyle(8,0,5);
       outtextxy(900,10,"WELCOME ");
    delay(1200);
         outtextxy(900,10,"TO      ");
    delay(1200);
         outtextxy(900,10,"THE");
    delay(1200);

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

    settextstyle(8,0,1);
rectangle(1000,100,1360,400);
outtextxy(1000,100,"INSTRUCTIONS : ");
outtextxy(1010,140,"1.  Each player gets 1 token");
outtextxy(1010,160,"2.  Press any key for next turn");
outtextxy(1010,180,"3.  Use X  to close the game");
outtextxy(1010,300,"ENJOY THE GAME!!");

 settextstyle(8,0,5);
       outtextxy(900,10,"THE LUDO GAME");

    settextstyle(8,0,2);
       outtextxy(1000,710,"MADE BY:");
           settextstyle(8,0,1);
       outtextxy(1020,730,"11801031");
       outtextxy(1020,750,"11801033");
       outtextxy(1020,770,"11801036");
       outtextxy(1020,790,"11801041");


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
while(pos_blue<47||pos_green<47||pos_red<47||pos_yellow<47)
{
char roll;
roll=getch();
if(roll=='s'||'S')
     if(turn<4)
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
           // PlaySoundA(TEXT("C:\Users\Salma\Documents\GitHub\ludo_cpp\Boing-sound.wav"),NULL,SND_SYNC);
            break;
    case 2:
        t.blueturn();
           // PlaySoundA(TEXT("C:\Users\Salma\Documents\GitHub\ludo_cpp\Boing-sound.wav"),NULL,SND_SYNC);
            break;
    case 3:
        t.redturn();
          //  PlaySoundA(TEXT("C:\Users\Salma\Documents\GitHub\ludo_cpp\Boing-sound.wav"),NULL,SND_SYNC);
          break;
    case 4:
        t.yellowturn();
          //  PlaySoundA(TEXT("C:\Users\Salma\Documents\GitHub\ludo_cpp\Boing-sound.wav"),NULL,SND_SYNC);
          break;
    };
}


}

