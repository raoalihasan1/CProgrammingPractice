// Write a program that takes an integer as parameter and places it in a variable of type int. The program then proceeds to print the value as well as the address of the variable as follows:

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int x = atoi(argv[1]);
  printf("Variable contains %d and is located @%p\n", x, &x);
  return 0;
}
