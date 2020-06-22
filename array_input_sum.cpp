#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,sum;
	printf("enter nums\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
		printf("sum is %d\n",sum);
	}
	getch();
	
}
