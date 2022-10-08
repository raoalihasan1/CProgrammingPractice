// Write a C program reading a double with scanf and asking the user if he wants this number to be floored or ceiled. Next, the program performs the requested operation and displays the result. 

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  double a;
  int b;
  printf("Input a number:\n");
  scanf("%le", &a);
  printf("Input 0 for ceil, 1 for floor");
  scanf("%d", &b);
  if(b == 0) printf("%f", ceil(a));
  else printf("%f", floor(a));
  return 0;
}
