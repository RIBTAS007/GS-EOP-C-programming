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