#include<stdio.h>
int main()
{
	int a=5,*p=&a;
	char b ='x', *c =&b;
	float m=5.5 , *f =&c;
	printf("value of p = Address of a = %p\n",p);
	printf("value of c = Address of b = %p\n",c);
	printf("value of f = Address of m = %p\n",f);
	p++;
	c++;
	f++;
	printf("now value of p = Address of a = %p\n",p);
	printf("now value of c = Address of b = %p\n",c);
	printf("now value of f = Address of m = %p\n",f);
	
}