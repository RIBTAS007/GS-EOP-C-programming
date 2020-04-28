#include <stdio.h>

int main(void) 
{
	 int a,b;
	 
	 a=5; b=0;
	 printf(" %d %d\n",a,b);
	 
	 b=a++;
	printf(" %d %d\n",a,b);
	
	a=5;
	b=++a;
	printf(" %d %d\n",a,b);
	
	
	
	return 0;
}

