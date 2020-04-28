#include<stdio.h>
int main () {
    int a,b,c,sum;
    
    sum = (a=5,b=6,c=7,a+b+c);
    printf("%d",sum);
   
    return 0;
}