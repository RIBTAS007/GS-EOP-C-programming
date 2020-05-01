// example of a 2d array

#include<stdio.h>
int main()
{
  int x[5][5];
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
	{
	   x[i][j]= i+j;
	}
  }
	
	for(i=0;i<5;i++)
	{
	  for(j=0;j<5;j++)
	  {
	     printf("%d\t",x[i][j]);
	  }
	   printf("\n");
	 }
}