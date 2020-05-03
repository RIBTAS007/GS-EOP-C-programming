//structure using pointers

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