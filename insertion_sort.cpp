#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,key,j;
	printf("enter nums\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<10;j++)
	{
	key=a[j];
	i=j-1;
	while(i>=0&&a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		
		}
	a[i+1]=key;
	}
	for(i=0;i<10;i++)
	{
	printf("%d\n",a[i]);
	}
}


