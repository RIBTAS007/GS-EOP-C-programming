//array of structure using pointers

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