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