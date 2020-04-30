// example of local variable

#include<stdio.h>
 
int main()
{
    int a = 100;
 
    {
        /*
            variable a declared in this block is
            completely different from variable
            declared outside.
        */
        int a = 10;  
        printf("Inner a = %d\n", a);
    }
 
    printf("Outer a = %d\n", a);
 
    // signal to operating system everything works fine
    return 0;
}