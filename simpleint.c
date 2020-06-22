#include<stdio.h>
void main()
{
	float p,r,t,a;
	printf("enter principle amount , rate and time");
	scanf("%f%f%f",&p,&r,&t);
	a=(p*r*t)/100 ;
	printf("amount to be paid is Rs%f",a);
	getch();
}
