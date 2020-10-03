#include <stdio.h>
 
int main()
{
   int c, f, l, mid, n, search, array[10];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   f = 0;
   l = n - 1;
   mid = (f+l)/2;
 
   while (f <= l) {
      if (array[mid] < search)
         f = mid + 1;    
      else if (array[mid] == search) {
         printf("%d found at location %d.\n", search, mid+1);
         break;
      }
      else
         l = mid - 1;
 
      mid = (f + l)/2;
   }
   if (f > l)
      printf("Not found! %d isn't present in the list.\n", search);
 
   return 0;  
}

