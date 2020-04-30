# C PROGRAMMING DAY 2

## TOPICS COVERED

* Operators
* Types of operators
* Precedence of operators
* typecasting 

## Code Snippets

Usage of **sizeof()** operator

```c
#include <stdio.h>

int main(void) 
{
	int i_var;
	float f_var;
	double d_var;
	char c_var;
	
	printf("sizeof(i_var) = %d bytes\n",sizeof(i_var));
	printf("sizeof(f_var) = %d bytes\n",sizeof(f_var));
	printf("sizeof(d_var) = %d bytes\n",sizeof(d_var));
	printf("sizeof(c_var) = %d bytes\n",sizeof(c_var));
	
	return 0;
}
```

Usage of **Arithmetic Operators** with int data type.

```c
include <stdio.h>

int main(void) 
{
	int a,b,m;
	 m=-3;
	 a= 14;
	 b= 2;
	 printf("The value of m is %d \n",m);
	 printf("a+b = %d \n",a+b);
	 printf("a-b = %d \n",a-b);
	 printf("a*b = %d \n",a*b);
	 printf("a\%b = %d \n",a%b);
	 printf("a/b = %d \n",a/b);
	
	return 0;
}
```

Usage of **Arithmetic Operators** with float data type.

```c
#include <stdio.h>

int main(void) 
{
	float a,b,m;
	 m=-3;
	 a= 14;
	 b= 2;
	 printf("The value of m is %f \n",m);
	 printf("a+b = %f \n",a+b);
	 printf("a-b = %f \n",a-b);
	 printf("a*b = %f \n",a*b);
	 printf("a/b = %f \n",a/b);
	
	return 0;
}

```

Arithmetic operation on mixed data types

```c
#include <stdio.h>

int main(void) 
{
	 int a,b;
	 float m;
	 m=3.0;
	 a= 7;
	 b= 2;
	 
	 printf(" %d \n",a/b);
	 printf(" %f \n",a/m);
	 printf(" %f \n",m/b);
	
	return 0;
}
```

Usage of **Assignment Operators**

```c
#include <stdio.h>

int main(void) 
{
	 int a,b;
	 
	 a=b= 7;
	 printf(" %d %d\n",a,b);
	 
	 a+=2;
	 printf(" %d \n",a);
	
	return 0;
}
```
Usage of **Prefix** and **Postfix** Operators

```c
#include <stdio.h>

int main(void) 
{
	 int a,b;
	 
	 a=5; b=0;
	 printf(" %d %d\n",a,b);
	 
	 b=a++;                //Postfix operator
	 printf(" %d %d\n",a,b);
	
	 a=5;
	 b=++a;                 //Prefix Operator
	 printf(" %d %d\n",a,b);

	 return 0;
}
```
What will be the output of program given below ?

```c
#include<stdio.h>
int main () {
    int m=10;
    int n, n1;
    n=++m;
    n1=m++;
    n--;
    --n1;
    n-=n1;
    printf("%d", n);
    return 0;
}
```

Usage of **Relational operators**

```c
#include <stdio.h> 
  
int main() 
{ 
    int a = 10, b = 4; 
  
    // greater than example 
    if (a > b) 
        printf("a is greater than b\n"); 
    else
        printf("a is less than or equal to b\n"); 
  
    // greater than equal to 
    if (a >= b) 
        printf("a is greater than or equal to b\n"); 
    else
        printf("a is lesser than b\n"); 
  
    // less than example 
    if (a < b) 
        printf("a is less than b\n"); 
    else
        printf("a is greater than or equal to b\n"); 
  
    // lesser than equal to 
    if (a <= b) 
        printf("a is lesser than or equal to b\n"); 
    else
        printf("a is greater than b\n"); 
  
    // equal to 
    if (a == b) 
        printf("a is equal to b\n"); 
    else
        printf("a and b are not equal\n"); 
  
    // not equal to 
    if (a != b) 
        printf("a is not equal to b\n"); 
    else
        printf("a is equal b\n"); 
  
    return 0; 
} 

```
Usage of **Logical Operators**

```c
#include <stdio.h> 
  
int main() 
{ 
    int a = 10, b = 4, c = 10, d = 20; 
  
    // logical operators 
  
    // logical AND example 
    if (a > b && c == d) 
        printf("a is greater than b AND c is equal to d\n"); 
    else
        printf("AND condition not satisfied\n"); 
  
    // logical OR example 
    if (a > b || c == d) 
        printf("a is greater than b OR c is equal to d\n"); 
    else
        printf("Neither a is greater than b nor c is equal "
               " to d\n"); 
  
    // logical NOT example 
    if (!a) 
        printf("a is zero\n"); 
    else
        printf("a is not zero"); 
  
    return 0; 
} 
```
Usage of **Comma Operator**

Example 1 :- To calculate sum of three numbers

```c
#include<stdio.h>
int main () {
    int a,b,c,sum;
    
    sum = (a=5,b=6,c=7,a+b+c);
    printf("%d",sum);
   
    return 0;
}
```

Example 2 :- to swap values 

```c
#include<stdio.h>
int main () {
    int a,b,temp;
    a=7;
    b=11;
    
    printf("%d\t %d\n",a,b);
    temp=a,a=b,b=temp;
    printf("%d\t %d",a,b);
   
    return 0;
}
```

Usage of **Bitwise Operators**

```c
#include <stdio.h> 
int main() 
{ 
    // a = 5(00000101), b = 9(00001001) 
    unsigned char a = 5, b = 9; 
  
    // The result is 00000001 
    printf("a = %d, b = %d\n", a, b);   // 00000101
    printf("a&b = %d\n", a & b);        // 00001001
	                                    //
  
    // The result is 00001101 
    printf("a|b = %d\n", a | b); 
  
    // The result is 00001100 
    printf("a^b = %d\n", a ^ b); 
  
    // The result is 11111010 
    printf("~a = %d\n", a = ~a); 
  
    // The result is 00010010 
    printf("b<<1 = %d\n", b << 1); 
  
    // The result is 00000100 
    printf("b>>1 = %d\n", b >> 1); 
  
    return 0; 
} 
```

Read more from this [presentation](https://github.com/RIBTAS007/EDUCATION-OUTREACH-2-C-prog/blob/master/Day%202/Day%202%20ppt.pptx?raw=true)
