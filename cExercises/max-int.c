// Write a C program that returns the maximum integer out of all the integers passed in the terminal

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if(argc == 1) {
    printf("[ERROR] Expected 1 Or More Integers To Be Passed: Received 0\n");
    return 1;
  }

  int max = atoi(argv[1]);

  for(int i = 2; i < argc; i++) {
    if(atoi(argv[i]) > max) max = atoi(argv[i]);
  }

  printf("Max Integer: %d\n", max);

  return 0;
}
