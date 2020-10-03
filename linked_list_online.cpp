#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
};
node * start,* temp,* last,* ptr;
int main()

{
	int n;
	char ch='y';
	while(ch=='y')
	{
		temp=new node;
		cout<<"enter value";
		cin>>n;
		temp->info=n;
		temp->link=NULL;
		if(start==NULL)
		{
			start=temp;
			last=temp;
		}
		else
		{
			last->link=temp;
			last=temp;		
		}
		cout<<"do you want to continue";
		cin>>ch;
	
	}
cout<<"linklistis"<<endl;
ptr = start;
while(ptr!=NULL)
{
	cout<<ptr->info;
	ptr=ptr->link;
	
}
return 0;
}


