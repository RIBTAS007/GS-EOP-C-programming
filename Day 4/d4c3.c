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