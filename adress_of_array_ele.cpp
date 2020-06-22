#include<stdio.h>
int main()
{
  int array[9] = {1,2,3,4,5,6,7,8,9};
  int i;
  for(i=0;i<9;i++)
  {
    printf("Address for %d is %d\n",array[i],&array[i]);
  }
}
