// Write a simple program printing the size of int variables, followed on the next line by the size of double variables, followed on a third line by the size of unsigned long long int variables. On a last line, print the value of the multiplication of these 3 sizes. 

#include <stdio.h>

int main (int argc, char *argv[])
{
  printf("%d\n%d\n%d\n%d\n", sizeof(int), sizeof(double), sizeof(unsigned long long int), sizeof(int) * sizeof(double) * sizeof(unsigned long long int));
  return 0;
}
