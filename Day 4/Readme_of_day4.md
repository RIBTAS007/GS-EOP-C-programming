# C PROGRAMMING DAY 4

## Topics Covered

* Functions in detail
* Global,local and static variables
* Recursion

## Theory

Read from this [presentation](https://github.com/RIBTAS007/EDUCATION-OUTREACH-2-C-prog/blob/master/Day%204/C%20PROGRAMMING%20DAY%204.pptx?raw=true)

## Code Snippets

Usage of **sqrt()** function

```c
#include <stdio.h>
#include<math.h>

int main()                    
{
    double num = 6, squareRoot;

    squareRoot =  sqrt(num);
    printf("Square root of %lf =  %lf", num, squareRoot);

    return 0;
}
```

User defined function to calculate sum of two numbers

```c
#include<stdio.h>
int sum(int x, int y); //Declaration  
int main()
{
	int a,b,s;
	a=4,b=5;
	s=sum(a,b);  //function call  //Actual paramters
	printf("sum of a and b is %d\n",s);
	return 0;
	
}

int sum(intx,int y)  // Definition //formal parameters
{
	int s;
	s=x+y;
	return s; 
}
```

Program to select the child if his age>20 and height is less than 5

```c
#include<stdio.h>
void selection(int age, float ht);
int main()
{
   int age;
   float ht;
   scanf("%d%f",&age,&height);
   selection(age,ht);
   return 0;
}

void selection(int age,float ht)
{
   if(age>20)
   {
     printf("Age should be less than 20\n");
	 return;
   }
   if(ht<5)
   {
      printf("height should be more than 5\n");
	  return;
   }
   printf("selected\n");
}
```
Usage of **local Variable**

```c
#include<stdio.h>
 
int main()
{
    int a = 100;
 
    {
        /*
            variable a declared in this block is
            completely different from variable
            declared outside.
        */
        int a = 10;  
        printf("Inner a = %d\n", a);
    }
 
    printf("Outer a = %d\n", a);
 
    // signal to operating system everything works fine
    return 0;
}
```

Usage of **global** and **static variables**

```c
#include<stdio.h>
 
void func_1();
int a, b = 10; //global variables
 
int main()
{
    func_1();
    func_1();
    func_1();
 
    // signal to operating system everything works fine
    return 0;
}
 
void func_1()
{
    int a = 1;                     //local variable
    static int b = 100;            //static variable
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    a++;
    b++;
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

Iterative way of calculating a factorial

```c
#include <stdio.h>
 
int main()
{
  int c, n, f = 1;
 
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    f = f * c;
 
  printf("Factorial of %d = %d\n", n, f);
 
  return 0;
}
```

Recursive way of calculating factorial of a number

```c
#include<stdio.h>
 
long factorial(int);
 
int main()
{
  int n;
  long f;
 
  printf("Enter an integer to find its factorial\n");
  scanf("%d", &n);
 
  if (n < 0)
    printf("Factorial of negative integers isn't defined.\n");
  else
  {
    f = factorial(n);
    printf("%d! = %ld\n", n, f);
  }
 
  return 0;
}

long factorial(int n)
{
  if (n == 0) // Base case
    return 1;
  else
    return (n*factorial(n-1));
}
```

