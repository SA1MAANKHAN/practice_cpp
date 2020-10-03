#include<iostream>
#include<conio.h>
using namespace std;
class marks
{
	private:
		int a,b,c,d,sum;
		float avg;
	public:
	
	void input()
	{
		cout<<"enter the marks of four subjects"<<endl;
		cin>>a>>b>>c>>d;
	}	

	void sumx()
	{
		sum=a+b+c+d;
		cout<<"sum is"<<sum<<endl;
	}
	
	
	void avgx()
	{
		float avg=(sum)/4;
		cout<<"average is="<<avg<<endl;
	}	
	};

int main()
{
	int e;
	marks m;
	do
	{
		cout<<"enter 1 for input 2 for sum 3 for average ,0 for exit"<<endl;
		cin>>e;
	if(e==1)
		m.input();
	if(e==2)
		m.sumx();
	if(e==3)
		m.avgx();
	}
	while(e!=0);
	return 0;
	getch();
}
