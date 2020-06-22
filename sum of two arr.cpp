#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[100],arr2[100],arr3[100],n,m,i;
	printf("enter size of first array\n");
	scanf("%d",&n);
	printf("enter elements of first array\n");
	for(i=0;i<=n;i++)
	 scanf("%d",&arr1[i]);
	printf("enter size of second array\n");
	scanf("%d",&m);
	printf("enter elements of second array\n");
	for(i=0;i<=m;i++)
	 scanf("%d",&arr2[i]);
	printf("the sum of elements is\n"); 
	for(i=0;i<=n;i++)
	{
	 arr3[i]=arr1[i]+arr2[i];
	 printf("%d\n",arr3[i]);
	}
	return 0;
}
