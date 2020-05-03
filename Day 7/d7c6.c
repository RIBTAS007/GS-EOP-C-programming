// array of structure

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
  struct student st[3] = { {25,"Aman"} , {30,"Urvashi"},{10,"Anil"}};
  
  //Enter Records of 5 students   
  /*for(i=0;i<5;i++)
  {    
       
    scanf("%d",&st[i].rollno);    
       
    scanf("%s",&st[i].name);    
  } */

   
  
  printf("\nStudent Information List:");    
  for(i=0;i<5;i++)
  {    
    printf("\nRollno:%d, Name:%s\n",st[i].rollno,st[i].name);    
  }    
   return 0;    
} 