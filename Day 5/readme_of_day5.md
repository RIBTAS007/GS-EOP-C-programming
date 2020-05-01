# C PROGRAMMING DAY 5

## Topics Covered

* Array(1D and 2D)
* Operation on Array
* String
* String.h library functions

## Theory

Read from this [presentation](https://github.com/RIBTAS007/GS-EOP-C-programming/blob/master/Day%205/C%20PROGRAMMING%20%20DAY%205.pptx?raw=true)

## Code Snippets

Taking input and output in an Array

```c
#include <stdio.h>

int main() {
  
  // Remove the /* */ from ant one method to see the working
  /* // method 1
  
  int x []={87,76,58,79,7};
  */
  
  /* //method 2
  
  int x[5]= {87,76,58,79,7};
  
  */

  /* //Method 3
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &x[i]);
  }
  */

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", x[i]);
  }
  return 0;
}
```

program to find average of n numbers using array

```c
#include <stdio.h>
int main()
{
     int marks[6], i, n, sum = 0, average;

     scanf("%d", &n);

     for(i=0; i<n; ++i)
     {
          
          scanf("%d", &marks[i]);
          printf("Entered number %d\n: ",marks[i]);
		  
          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %d", average);

     return 0;
}
```

Program to Insert an element at a specific position in an Array 

```c
#include <stdio.h> 
  
int main() 
{ 
    int arr[100] = { 0 }; 
    int i, x, pos, n = 10; 
  
    // initial array of size 10 
    for (i = 0; i < 10; i++) 
        arr[i] = i + 1; 
  
    // print the original array 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
  
    // element to be inserted 
    x = 50; 
  
    // position at which element 
    // is to be inserted 
    pos = 5; 
  
    // increase the size by 1 
    n++; 
  
    // shift elements forward 
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 
  
    // insert x at pos 
    arr[pos - 1] = x; 
  
    // print the updated array 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
  
    return 0; 
} 
```

Program to Delete an element at a specific position in an Array 

```c
#include <stdio.h>
int main()
{
   int array[100], position, i, n;

   //Enter number of elements in array"
   scanf("%d", &n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   //Enter the location where you wish to delete element"
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("Resultant array:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", array[i]);
   }

   return 0;
}
```

Example of a 2D array

```c
#include<stdio.h>
int main()
{
  int x[5][5];
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
	{
	   x[i][j]= i+j;
	}
  }
	
	for(i=0;i<5;i++)
	{
	  for(j=0;j<5;j++)
	  {
	     printf("%d\t",x[i][j]);
	  }
	   printf("\n");
	 }
}
```

**Bubble sort**

```c
#include <stdio.h>     

int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int i, j; 
    for (i = 0; i < n-1; i++) 
    {	
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
        {
		    if (arr[j] > arr[j+1]) 
            {
			    temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			} 
			  
		}
    }
    printf("Sorted array: \n"); 
	
	for (i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n");
     
    return 0; 
}
```

**Insertion sort**

```c
#include <stdio.h> 
  
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int i, key, j; 
    for (i = 1; i < n; i++) 
	{ 
        key = arr[i]; 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && arr[j] > key) 
		{ 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    }
    
	 
	for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n");
  
    return 0; 
} 

```

Taking input of a string and display it

```c
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
```
Taking input of multiple strings and printing it

```c
#include<stdio.h>
int main()
{
   char names[5][10];
   int i;
   for(i=0;i<5;i++)
    scanf("%s", &names[i]);
	
   for(i=0;i<5;i++)
     printf("%s\n",names[i]);
     
   return 0;
}
 

```
Usage of **strlen()**

```c
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %ld \n",strlen(a));
    printf("Length of string b = %ld \n",strlen(b));

    return 0;
}
```
Usage of **strcmp()**

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
```

Usage of **strcpy()**

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10]= "awesome";
    char str2[10];
    char str3[10];

    strcpy(str2, str1);
    strcpy(str3, "well");
    printf("%s\n",str2);
    printf("%s\n",str3);

    return 0;
}
```

