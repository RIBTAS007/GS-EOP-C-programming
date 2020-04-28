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