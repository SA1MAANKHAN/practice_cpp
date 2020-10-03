#include<stdio.h>
void main()
{
	int sum=0 ,a[5]={1,3,7,9},i;
	for(i=0;i<5;i++)
	{
	sum=sum + a[i];
	}
	printf("sum of array ele is %d\n",sum);
	getch();
}
