// Write a C program taking an integer as command line parameter and displaying the factorial of that integer on the standard output.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int num = atoi(argv[1]);
  long long int factorial = 1;
  for(int i = num; i > 1; i--) factorial *= i;
  printf("%d! = %lld\n", num, factorial);
  return 0;
}
