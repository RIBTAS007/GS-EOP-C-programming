/* print fibonacci numbers series

    1,1,2,3,5,8.....
*/

#include<stdio.h>
int main()
{
	long x,y,z;
	int i,n;
	x=0; y=1;
	scanf("%d",&n);
	printf("%ld",y);
	for(i=1;i<n;i++)
	{
		z=x+y;
		printf("%ld\t",z);
		x=y;
		y=z;
	}
	return 0;
}