# C PROGRAMMING DAY 1

## Topics Covered
* Introduction to C programming
* Taking input using printf()
* Giving output using scanf()

## Theory

Read from this [presentation](https://github.com/RIBTAS007/EDUCATION-OUTREACH-2-C-prog/blob/master/DAY%201/C%20PROGRAMMING%20day%201.pptx?raw=true)

## Code Snippets

For giving output we use **printf()**

```c
#include<stdio.h>

int main()             
{       
	printf("Hello World\n");
	return 0;
}
```

For taking input from the user we use **scanf()**

```c
#include<stdio.h>

int main()             
{
	 int a,b;
    scanf("%d%d",&a,&b);
	 printf("\n"); 	 
	 printf("a=%d\tb=%d\n",a,b);
	 return 0;
}
```

