// itrative way for factorial

#include <stdio.h>
 
int main()
{
  int c, n, f = 1;
 
  scanf("%d", &n);

  for (c = 1; c <= n; c++)
    f = f * c;
 
  printf("Factorial of %d = %d\n", n, f);
 
  return 0;
}