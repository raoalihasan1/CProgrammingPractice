// Write a program that takes up to 10 integers as command line parameters. These parameters are converted to integer types into an array of int named array. Then, the program sorts the array by increasing value and prints the result.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int ARRAY_SIZE = argc - 1;
  int array[ARRAY_SIZE];
  int tmp = 0;
  for(int i = 0; i < ARRAY_SIZE; i++) array[i] = atoi(argv[i + 1]);
  for(int i = 0; i < ARRAY_SIZE; i++){
    for(int j = i + 1; j < ARRAY_SIZE; j++){
      if(array[i] > array[j]){
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
  for(int i = 0; i < ARRAY_SIZE; i++) printf("%d ", array[i]);
  printf("\n");
  return 0;
}
