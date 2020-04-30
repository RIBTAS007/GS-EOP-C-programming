# C PROGRAMMING DAY 3

## Topics Covered

* What are control statements
* if-else
* Loops
   * While loop
   * do-while loop
   * For loop
* Goto
* Switch

## Theory

Read from this [presentation](https://github.com/RIBTAS007/EDUCATION-OUTREACH-2-C-prog/blob/master/Day%203/C%20PROGRAMMING%20%20DAY%203.pptx?raw=true)

## Code Snippets

Usage of **if else** 

```c
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d, %d",&a,&b);
	if(a>b == true)
		printf("bigger number=%d",a);
	else
		printf("bigger number=%d",b);
}
```

Program to check entered number is negative

```c
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
```

Program to find whether a year is leap or not

```c
#include<stdio.h>
int main()
{
	int year;
	 scand("%d",&year);
	 
	 if(year%100!=0)
	 {
		 if(year%4==0)
			 printf("leap year\n");
		 else
			 printf("not leap\n");
	 }
     else
     {
		 if(year%400==0)
			 printf("leap year \n");
		 else
			 printf("not leap year\n");
	 }
     return 0;	 
}
```

Program to find out grade of students when marks of 4 subjects are given

Marks range | Grade Assigned
------------ | -------------
p>=85 | A
p<85 and p>=70 | B
p<70 and p>=55  | C
p<55 and p>=40  | D
p<40 | E

```c
	#include<iostream.h>
	int main()
	{
		float m1,m2,m3,m4,total,per;
		char g;
		scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
		total = m1+m2+m3+m4;
		per = total/4;
		if(per>=85)
			g='A';
		else if(per>=70)
			g='B';
		else if(per>=55)
			g='C';
		else if(per>=40)
			g='D';
		else
			g='E';
		
		printf("percentage is %f , grade is %c \n",per,g);
		
		return 0;
	}
```

Program to print 1 t0 10 using **while loop**

```c
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		i++;
	}
	return 0;
}
```

Program to print sum of digits of any number

```c
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
```

Usage of **do-while loop**

```c
#include<stdio.h>
int main()
{
	int i=11;
	do{
		printf("%d\t",i);
		i++;
	}while(i<=10);
	return 0;
}
```

Program to print 1 t0 10 using **for loop**

```c
#include<stdio.h>
int main()
{
	int i=1;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
	}
	return 0;
} 
```

Program to print fibonacci numbers series

    1,1,2,3,5,8,13,21.....

```c
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
```
Usage of **nested for loops**

```c
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<3;i++)
	{
		for(j=1;j<5;j++)
		{
			printf("%d ,%d\t",i,j);
		}
		printf("\n");
	}
	return 0;
}
```
Common Infinite loop Mistakes 

```c
/*
    for( ;  ; )
	{
	  print("hello");
	}
	-------------------------
	
	while(1)
	{
	  print("hello");
	}
	-------------------------------
	do{
	      print("hello");
	}while(1);
	-----------------------------
	int i=1;
	while(i<=5)
	{
	   print("hello");
	}
	--------------------------------
	
	for(i=3;i<5;i--)
	{
	   print("hello");
	}
	---------------------------------
	int i=2;
	while(i=2)
	{
	
	}
*/
```

Check whether a number is Prime or not

```c
#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
} 
```

Usage of **continue** statement

```c
#include<stdio.h>
int main()
{
	int i=1;
	for(i=0;i<10;i++)
	{
		if(i%3==0)
		{
			continue;
			print("hello");
			print("hi");
		}
		printf("%d\t",i);
	}
	return 0;
}

```

Usage of **goto** statement

```c
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
```
Usage of **switch-case** to make a calculator

```c
/* perform arithmetic op on numbers  , enter operation then 2 numbers as input*/

#include <stdio.h>
int main() {
    char operator;
    int a, b;
    scanf("%c", &operator);
    scanf("%d %d", &a, &b);

    switch (operator) {
    case '+':
        printf("%d + %d = %d", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;
    case '*':
        printf("%d* %d = %d", a, b, a*b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}

```
valid and invalid switch case statements

```c
/*
//Valid syntax

int i1,i2,i3;
char c1,c2;
float f;

switch(i1);
switch(c1);
switch(i1>i2);
switch(c1+c2-3);
switch(2.5>1.2)

case 4:
case 'a':
case 2+4:
case 'a'>'b':

//Invalid syntax

switch(f)
switch(i1+4.5)

case "abc":
case i1:
case i1>i2:
case 2,4,5:

*/

```
