// Write a program that takes up to 10 integers as command line parameters. These parameters are converted to integer types into an array of int named array. Then, the program iterates over the array and outputs if each number is even or odd.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int ARRAY_SIZE = argc - 1;
  int array[ARRAY_SIZE];
  for(int i = 0; i < ARRAY_SIZE; i++) array[i] = atoi(argv[i + 1]);
  for(int i = 0; i < ARRAY_SIZE; i++){
    if(array[i] % 2){
      printf("%d is odd\n", array[i]);
    } else {
      printf("%d is even\n", array[i]);
    }
  }
  return 0;
}
