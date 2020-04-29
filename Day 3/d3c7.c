//print sum of digits of any number

#include<stdio.h>
int main()
{
	int n,sum=0,rem;
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n!=10;
	}
	printf("sum of digits=%d",sum);
	return 0;
}