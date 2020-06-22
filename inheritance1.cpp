#include<iostream>
using namespace std;
class classA
{
    public:
     int a;

};
class classB :virtual public classA
{
    public:
     int b;

};
class classC :virtual public classB
{
    public:
     int c;

};
class classD :virtual public classC
{
    public:
     int d;

};
int main()
{
    classD obj;
    obj.a=101;
    obj.a=102;
    obj.b=103;
    obj.c=104;
    obj.c=105;
    obj.d=106;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj.d<<endl;

    return 0;
}
