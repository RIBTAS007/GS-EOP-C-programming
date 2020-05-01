//deleting an element from an array

#include <stdio.h>
int main()
{
   int array[100], position, i, n;

   //Enter number of elements in array"
   scanf("%d", &n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   //Enter the location where you wish to delete element"
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("Resultant array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", array[i]);
   }

   return 0;
}