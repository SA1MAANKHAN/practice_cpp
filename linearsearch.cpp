#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i,n,a;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	   {
	   scanf("%d",&arr[i]);
       }
	printf("enter the element you want to search\n") ;
	scanf("%d",&a);
	for(i=0;i<=n;i++)
	   {
	   	 if(a==arr[i])
	   	  {
		   
			printf("found at index num: %d",i);
	        break;
		  } 
		}
		
		 return 0; 	
}
