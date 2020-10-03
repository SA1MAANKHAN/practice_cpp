#define _WIN32_WINNT 0x0500

#include <cstdlib>
#include <iostream>
#include <process.h>
#include <windows.h>

using namespace std;

class MouseInputHandler
{
      //mouse input handler callback function pointer
      typedef void (*MIHCB)(int,int,void*);

      public:
      MouseInputHandler(){}
      ~MouseInputHandler(){}
      void init();

      inline void start_polling()
      {
             _beginthread(polling_function,0,this);
             polling=true;
      }

      inline void stop_polling()
      {
             input.quit=true;
             while (polling);
      }

      int getx();
      int gety();
      void getxy(int & x, int & y);

      //setting the callbacks
      inline void set_lbdcb(MIHCB f){lbdcb=f;}
      inline void set_lbucb(MIHCB f){lbucb=f;}
      inline void set_lbccb(MIHCB f){lbccb=f;}
      inline void set_rbdcb(MIHCB f){}
      inline void set_rbucb(MIHCB f){}
      inline void set_rbccb(MIHCB f){}

      //setting the params for the callbacks
      inline void set_lbdcbp(void*p){lbdcbp=p;}
      inline void set_lbucbp(void*p){lbucbp=p;}
      inline void set_lbccbp(void*p){lbccbp=p;}
      inline void set_rbdcbp(void*p){}
      inline void set_rbucbp(void*p){}
      inline void set_rbccbp(void*p){}

      private:
      struct MouseInput
      {
             //current and previous mouse button status
             bool cleft, pleft;
             bool cright, pright;

             bool quit;
             int x,y;

      } input;

      bool polling;

      static void polling_function(void*);
      static inline bool is_pressed(int key)
      {
             return (GetAsyncKeyState(key)>>15);
      }

      MIHCB lbdcb;
      MIHCB lbucb;
      MIHCB lbccb;
      MIHCB rbdcb;
      MIHCB rbucb;
      MIHCB rbccb;

      void* lbdcbp;
      void* lbucbp;
      void* lbccbp;
      void* rbdcbp;
      void* rbucbp;
      void* rbccbp;

};

void MouseInputHandler::polling_function(void*p)
{
     MouseInputHandler * m=(MouseInputHandler*)p;

     m->input.quit=false;

     HWND window=GetConsoleWindow();
     RECT wpos;
     POINT cpos;


     m->input.cleft=m->input.pleft=m->input.cright=m->input.pright=false;
     int x,y;
     int tl, tr,t;


     while (!m->input.quit)
     {
           GetWindowRect(window,&wpos);
           GetCursorPos(&cpos);

           cpos.x-=wpos.left;
           cpos.y-=wpos.top;

           //transform screen to console coords
           x=(cpos.x-5)/8;
           y=(cpos.y-25)/12;

           m->input.cleft=is_pressed(VK_LBUTTON);
           m->input.cright=is_pressed(VK_RBUTTON);

           //mouse down event: it was up and now is down
           if (m->input.cleft && !m->input.pleft)
           {
              tl=(clock()*1000)/CLOCKS_PER_SEC;
              m->lbdcb(x,y,m->lbdcbp);
           }

           //mouse up event: it was down and now is up
           if (!m->input.cleft && m->input.pleft)
           {
              t=(clock()*1000)/CLOCKS_PER_SEC;
              m->lbucb(x,y,m->lbucbp);

              //mouse click event:
              //down->up in less than 100 ms
              if (t-tl<=100)
              m->lbccb(x,y,m->lbccbp);
           }

           //...more stuff here

           m->input.pleft=m->input.cleft;
           //m->input.pright=m->input.cright;

           Sleep(25);
     }
     m->polling=false;
}

////////////////////////////////////////////////////////////////////////////////

void left_down(int x, int y, void*p)
{
     printf("left button down at (%d,%d)\n",x,y);
}

void left_up(int x, int y, void*p)
{
     printf("left button up at (%d,%d)\n",x,y);
}

void left_click(int x, int y, void*p)
{
     printf("left click at (%d,%d)\n",x,y);
}

int main()
{
    MouseInputHandler mouse;
    mouse.set_lbdcb(left_down);
    mouse.set_lbucb(left_up);
    mouse.set_lbccb(left_click);

    cout << "hit esc anytime to quit" << endl;

    mouse.start_polling();

    while (!(GetAsyncKeyState(VK_ESCAPE)>>15));

    mouse.stop_polling();

    system("pause");
    return 0;
}
