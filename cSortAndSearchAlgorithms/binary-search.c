// Take a list of command line numbers and an inputted number from the user to search if it is present in the array of numbers using binary search method

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
  int *searchFor;
  for (int i = 0; i < ARRAY_SIZE; i++)
    array[i] = atoi(argv[i + 1]);
  printf("Input A Number To Search For: ");
  scanf("%d", searchFor);
  insertionSort(array, ARRAY_SIZE);
  if (!binarySearch(array, *searchFor, 0, ARRAY_SIZE - 1))
  {
    printf("Binary Search:\nNumber Not Present In Array\n");
  }
  else
  {
    printf("Binary Search:\nNumber Present In Array\n");
  }
  return 0;
}
