#include<stdio.h>
int sum(int x, int y); //Declaration
int main()
{
	int a,b,s;
	a=4,b=5;
	s=sum(a,b);
	printf("sum of a and b is %d\n",s);
	return 0;
	
}

int sum(intx,int y)  // Definition
{
	int s;
	s=x+y;
	return s;
}