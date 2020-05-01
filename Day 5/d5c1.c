// Taking input and output in an array

#include <stdio.h>

int main() {
  

  // method 1
  
  int x []={87,76,58,79,7};
  
  // method 2
  
  int x[5]= {87,76,58,79,7};

  // method 3
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &x[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", x[i]);
  }
  return 0;
}