#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[5],i,greatest;
	printf("enter array\n");
    for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	greatest=arr[i];
	for(i=0;i<5;i++)
	{
	if(arr[i]<=arr[i+1])
	 {
		greatest=arr[i+1];
	 }
	 }
	printf("greatest is %d",greatest);
	getch();
	return 0;
}
