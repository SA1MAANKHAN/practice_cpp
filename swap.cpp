#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c,x;
	printf("enter the digits of num you want swap one by one\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d%d\n",a,b);
	printf("PRESS 1 FOR SWAP\n");
	scanf("%d",&x);
	if(x==1)
	printf("%d%d",b,a);
	getch();
	return 0;
}
