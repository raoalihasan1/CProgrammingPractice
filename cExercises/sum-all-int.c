// Sum together all the integers passed in terminal

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double sum = 0;
  for(int i = 1; i < argc; i++) sum += atoi(argv[i]);
  printf("Sum: %f\n", sum);
  return 0;
}
