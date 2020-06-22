#include<conio.h>
#include<stdio.h>
int main()
{
	int fact=1,i,n;
	printf("enter the num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
    return 0;
    
}
