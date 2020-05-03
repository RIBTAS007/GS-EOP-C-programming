//malloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
	//take number of elements as input
     scanf("%d",&n);
	 
     p = (int*)malloc(n*sizeof(int));
	 
	 //check if we got the memory or not
     if(p==NULL)
     {
	    printf("memory not available\n");
		exit(1);
	 }
	 
	 //take n numbers as input
     for(i=0;i<n;i++)
     {
	   scanf("%d",p+i);
	 }

      // print them
     for(i=0;i<n;i++)
     {
	   printf("%d\t",*(p+i));
	 }	

     return 0;	 
}