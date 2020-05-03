# C PROGRAMMING DAY 7

## Topics Covered

* Dynamic memory allocation
* Structures
* Application of structure 

## Theory

Read from this [presentation](https://github.com/RIBTAS007/GS-EOP-C-programming/blob/master/Day%207/C%20PROGRAMMING%20%20DAY%207.pptx?raw=true)

## Code Snippets

Usage of various functions to allocate memory dynamically

Usage of **malloc()**

```c
//malloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
	//take number of elements as input
     scanf("%d",&n);
	 
     p = (int*)malloc(n*sizeof(int));
	 
	 //check if we got the memory or not
     if(p==NULL)
     {
	    printf("memory not available\n");
		exit(1);
	 }
	 
	 //take n numbers as input
     for(i=0;i<n;i++)
     {
	   scanf("%d",p+i);
	 }

      // print them
     for(i=0;i<n;i++)
     {
	   printf("%d\t",*(p+i));
	 }	

     return 0;	 
}
```

Usage of **calloc()**

```c
//calloc 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
	//take number of elements as input
     scanf("%d",&n);
	 
     p = (int*)calloc(5,sizeof(int));
	 
	 //check if we got the memory or not
     if(p==NULL)
     {
	    printf("memory not available\n");
		exit(1);
	 }
	 
	 //take n numbers as input
     for(i=0;i<n;i++)
     {
	   scanf("%d",p+i);
	 }

      // print them
     for(i=0;i<n;i++)
     {
	   printf("%d\t",*(p+i));
	 }	

     return 0;	 
}
```

Usage of **realloc()**

```c
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
	//take number of elements as input
     scanf("%d",&n);
	 
     p = (int*)calloc(5,sizeof(int));
	 
	 //check if we got the memory or not
     if(p==NULL)
     {
	    printf("memory not available\n");
		exit(1);
	 }
	 
	 //take n numbers as input
     for(i=0;i<n;i++)
     {
	    *(ptr+i)=2*i;
	 }
     
	 p = (int*)realloc(ptr,10*sizeof(int));
	 
	 //check if we got the memory or not
     if(p==NULL)
     {
	    printf("memory not available\n");
		exit(1);
	 }
	 
	 n=10;
	 
	 for(i=5;i<9;i++)
     {
	    *(ptr+i)=2*i;
	 }
	 
	 
      // print them
     for(i=0;i<n;i++)
     {
	   printf("%d\t",*(p+i));
	 }	

     return 0;	 
}
```

Taking input and output using structures

```c
// structure

#include <stdio.h>

struct student
{
   int rollno;
   char name[10];
};

int main()
{
    struct student s1 = { 8,"Sandeep"};
       

    //Enter age: 
    scanf("%d", &s1.rollno);

    //Enter name
    scanf("%s", &s1.name);

    printf("Displaying:\n");
    printf("rollno: %d\n", s1.rollno);
    printf("name: %s", s1.name);

    return 0;
}
```

taking input and output in structures using pointers

```c
#include <stdio.h>
struct student
{
   int rollno;
   char name[10];
};

int main()
{
    struct student *person, s1;
    person = &s1;   

    //Enter rollno: 
    scanf("%d", &person->rollno);

    //Enter name: 
    scanf("%s", &person->name);

    printf("Displaying:\n");
    printf("rollno: %d\n", person->rollno);
    printf("name: %s", person->name);

    return 0;
}
```

Array of structures 

```c
// array of structure using .

#include<stdio.h>  
#include <string.h>    
struct student
{    
  int rollno;    
  char name[10];    
}; 
   
int main()
{    
  int i; 
  //method 1
  struct student st[3] = { {25,"Aman"} , {30,"Urvashi"},{10,"Anil"}};
  
  //Enter Records of 3 students   
  /*
  //method 2
  for(i=0;i<3;i++)
  {    
       
    scanf("%d",&st[i].rollno);    
       
    scanf("%s",&st[i].name);    
  } */

   
  
  printf("\nStudent Information List:");    
  for(i=0;i<3;i++)
  {    
    printf("\nRollno:%d, Name:%s\n",st[i].rollno,st[i].name);    
  }    
   return 0;    
} 
```

Array of structures using pointers

```c
#include <stdio.h>

struct student {
     int id;
    char name[64];
  };

int main(void) {
   
  // student structure variable
  struct student s[3];
  
  // student structure pointer variable
  struct student *ptr = NULL;
  
  // other variables
  int i;
  
  // assign std to ptr
  ptr = s;
  
  // get detail for user
  for (i = 0; i < 3; i++) {
    //Enter detail of student i + 1;
    //Enter ID: 
    scanf("%d", &ptr->id);
    //Enter name:
    scanf("%s", ptr->name);
    // update pointer to point at next element
    // of the array std
    ptr++;
  }
  
  // reset pointer back to the starting
  // address of std array
  ptr = s;
  
  for (i = 0; i < 3; i++) 
  {
    printf("\nDetail of student #%d\n", (i + 1));
      
    
    printf("\nResult via std\n");
    printf("ID: %d\n", s[i].id);
    printf("First Name: %s\n", s[i].name);
  
    
    printf("\nResult via ptr\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
 
    
    // update pointer to point at next element
    // of the array std
    ptr++;
  }
  
  return 0;
}
```
[Linked List](Linkedlist.html)
