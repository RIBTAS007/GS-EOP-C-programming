// use of goto

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
		goto even;
	else
		goto odd;
	
	even:
	    printf("Number is even\n");
		goto end;
		
	 odd:
	     printf("Number is odd\n");
		 goto end;
		 
	end:
	     printf("\n");
		 
	return 0;
}