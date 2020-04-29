// program to find whether a year is leap or not

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