// Write a C program taking a year as command line parameter and printing out on the standard output if this year is leap or not.


#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int year = atoi(argv[1]);
  if((year % 4) != 0) printf("%d is not a leap year\n", year);
  else if((year % 100) != 0) printf("%d is a leap year\n", year);
  else if((year % 400) != 0) printf("%d is not a leap year\n", year);
  else printf("%d is a leap year\n", year);
  return 0;
}
