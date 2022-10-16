// Take a list of numbers as command line parameters and store them in an array and sort them using merge sort and then print out the sorted array

#include <stdio.h>
#include <stdlib.h>
#include "search-and-sort.h"

int main(int argc, char *argv[])
{
  int ARRAY_SIZE = argc - 1;
  if (!ARRAY_SIZE)
  {
    printf("NO NUMBERS PASSED IN THE COMMAND LINE!\n");
    return 0;
  }
  int array[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; i++)
    array[i] = atoi(argv[i + 1]);
  mergeSort(array, 0, ARRAY_SIZE - 1);
  printf("Merge Sort:\nSorted Array: [");
  for (int i = 0; i < ARRAY_SIZE - 1; i++)
    printf("%d,", array[i]);
  printf("%d]\n", array[ARRAY_SIZE - 1]);
  return 0;
}
