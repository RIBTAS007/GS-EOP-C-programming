// Program to find the average of n numbers using arrays

#include <stdio.h>
int main()
{
     int marks[6], i, n, sum = 0, average;

     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          
          scanf("%d", &marks[i]);
          printf("Entered number %d\n: ",marks[i]);
		  
          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d", average);

     return 0;
}