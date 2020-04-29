// program to check entered number is negative

#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num<0)
	{
		printf("number entered is negative \n");
	}
	
	num=-num;
	printf("value of num is %d\n",num);
	return 0;
}