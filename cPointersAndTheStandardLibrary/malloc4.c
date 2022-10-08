// Write a C program using malloc to allocate an array able to contain 10 int, fill this array with the 10 first natural number (starting with 0)

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int ARRAY_SIZE = sizeof(int) * 10;
  int *natNumbers = malloc(ARRAY_SIZE);
  if(natNumbers != NULL){
    for(int i = 0; i < 10; i++) natNumbers[i] = i;
  }
  for(int i = 0; i < 10; i++) printf("%d\n", natNumbers[i]);
  free(natNumbers);
  return 0;
}
