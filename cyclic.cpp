
//cyclic movement
#include<iostream>
using namespace std;
int main()
{
 int a=0,b=0;
 for(int i=0;i<20;i++)
 {  if(a<=3)
    {
    a++;
    }
    else
    {
    a=1;
    }
    cout<<a<<endl<<endl<<endl;
 }
 while(b<10)
 {
 cout<<rand()%5+1<<endl;
 b++;
 }
}
