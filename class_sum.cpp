#include<iostream>
#include<conio.h>
using namespace std;
class addition
{	private:
		int a,b,c,d;
	public:
		print(void)
         {
 	     cout<<"enter the nums"<<endl;  
 	     cin>>a>>b;
 	     cout<<"nums are  "<<a<<" &  "<<b<<endl;
         }
		int sum(void)
         {
	     c= a+b;
	     return c;
         }
         int pro(void)
         {
	     d= a*b;
	     return d;
         }
     };
int main()
{	addition a;
	a.print();
	cout<<"the sum is  "<<a.sum()<<endl;
	cout<<"the mul is  "<<a.pro();
	return 0;
}
