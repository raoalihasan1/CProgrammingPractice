// Write a program taking a list of integers as command line parameters, storing them in an array allocated with malloc, and sorting that array in increasing order.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int ARRAY_SIZE = (argc - 1) * sizeof(int);
  int * intArray = (int *) malloc(ARRAY_SIZE);
  if(intArray == NULL) return -1;
  for(int i = 0; i < argc - 1; i++) intArray[i] = atoi(argv[i + 1]);
  for(int i = 0; i < argc; i++){
    for(int j = i + 1; j < argc; j++){
      if(intArray[i] > intArray[j]){
        int tmp = intArray[i];
        intArray[i] = intArray[j];
        intArray[j] = tmp;
      }
    }
  }
  for(int i = 0; i < argc; i++) printf("%d ", intArray[i]);
  printf("\n");
  free(intArray);
  return 0;
}
