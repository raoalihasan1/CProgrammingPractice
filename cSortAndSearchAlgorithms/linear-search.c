// Take a list of numbers from the command line and an input from the user to search for a number from the list inputted by the user

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
  if (!linearSearch(array, *searchFor, ARRAY_SIZE))
  {
    printf("Linear Search:\nNumber Not Present In Array\n");
  }
  else
  {
    printf("Linear Search:\nNumber Present In Array\n");
  }
  return 0;
}
