# C PROGRAMMING DAY 6

## Topics Covered

* Pointers
* Pointer Arithmetic
* Pointer and arrays

## Theory

Read from this [presentation](https://github.com/RIBTAS007/GS-EOP-C-programming/blob/master/Day%206/C%20PROGRAMMING%20DAY%206.pptx?raw=true)

## Code Snippets

Printing the address of a variable

```c
#include <stdio.h>

int main(void) 
{
	int x;
	printf("%p",&x);
	return 0;
}
```

Program to print values and addresses of varibales and poinnter variables

```c
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
```

Program to demonstrate addition of integer to a pointer variable

```c
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
```

Guess the output for each operation

```c
int x,y;   // assume x and y are stored contiguously in memory
x=10;
y= 12;
int *ptr = &x;

x =*ptr++;   // x same and ptr changes

x = *++ptr;   // x and ptr both changes

x =(*ptr)++;  //ptr is same and x changes

x=++*ptr;      // x changes ptr is same.
```

Pointer with array demo

```c
&a[0]=2000
&a[1]=2002
&a[2]=2004
&a[3]=2006
&a[4]=2008

a = constant pointer to the first element = &a[0] = 2000
a+1 = constant pointer to the second element = &a[0] + 1*sizeof(int) = 2000 + 2 =2002
a+2 = constant pointer to the third element = &a[0] + 2*sizeof(int) = 2000 + 4 =2004
a+3 = constant pointer to the fourth element = &a[0] + 3*sizeof(int) = 2000 + 6 =2006
a+4 = constant pointer to the fifth element = &a[0] + 4*sizeof(int) = 2000 + 8 =2008

*a = *2000 = 1
*(a+1)=*(2002)=2
*(a+2)=*(2004)=3
*(a+3)=*(2006)=4
*(a+4)=*(2008)=5
```

Usage of various pointer notations in array

```c
#include<stdio.h>
int main()
{
  int arr[5]={1,2,3,4,5};
  int i=0;
  for(i-0;i<5;i++)
  {
     printf("value of arr[%d]=",i);
	   printf("%d\t=",arr[i]);
	   printf("%d\t=",*(arr+i));
	   printf("%d\tand ",*(i + arr));
	   printf("address of arr[%d]= %p \n",i,&arr[i]);
	 
  }
  
  return 0;
}
```

