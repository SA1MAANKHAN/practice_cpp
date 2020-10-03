#include<iostream>
#include<conio.h>
using namespace std;
class A
{
  public:
    int a;
  void display()
  {
      cout<<"disp of class a"<<endl;
  }
};
class B: public A
{
};
class C: public B
{
};
class D: public C
{
};
int main ()
{
    D obj;
    obj.display();
    return 0;

}


