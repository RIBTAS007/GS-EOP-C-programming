#include<stdio.h>
int main()
{
	int a = 87;
	float b = 4.5;
	int *p1 =&a;
	float *p2 = &b;
	printf("value of p1 = Address of a = %p\n",p1);
	printf("value of p2 = Address of b = %p\n",p2);
	printf("address of p1 = %p\n",&p1);
	printf("address of p2 = %p\n",&p1);
	printf("value of a = %d %d %d \n",a, *p1, *(&a));
	printf("value of b = %f %f %f \n",b, *p2, *(&b));
	return 0;
}

//%p gives us the hexadecimal values

