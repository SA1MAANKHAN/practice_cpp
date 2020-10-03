#include<iostream>
#include<conio.h>
using namespace std;
class STACK
{
	private:
		int s[5],top,item,i,n;
	public:
	
	void create()
	{
	top=-1;
	n=5;
	}
	
	void push()
	{
		if(top==n-1)
		{
			cout<<"overflow"<<endl;
		}
		else
		{
		cout<<"enter element"<<endl;
		cin>>item;
		top=top+1;
		s[top]=item;
		}
	}	

	void pop()
	{
		if(top==-1)
		{
			cout<<"underflow"<<endl;
		}
		else
		{
			cout<<"deleted element is"<<s[top]<<endl;
			top=top-1;
		}
	}
	
	void print()
	{
		for(i=top;i>=0;i--)
		{
		
		cout<<""<<s[i]<<endl;
		}	
	}
};
int main()
{
	int ch;
	STACK SS;
	SS.create();
	do
	{
		cout<<"enter 1 for push"<<endl<<"2 for pop"<<endl<<"3 for print"<<endl<<"0 for end"<<endl;
		cin>>ch;
		if(ch==1)
		SS.push();
		if(ch==2)
		SS.pop();
		if(ch==3)
		SS.print();
	}
	while(ch!=0);
	return 0;
	getch();
}
