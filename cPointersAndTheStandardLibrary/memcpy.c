// Write a C program taking an integer n as command line parameter, allocating an array of integer of size n, and filling that array with random integers -- each between 0 and 100. Next, a second array of size n is created and the content of the first array is copied into the second one with a single call to memcpy

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
  int n = atoi(argv[1]);
  int a[n];
  for(int i = 0; i < n; i++) a[i] = rand() % 10;
  int b[n];
  memcpy(b, a, n * sizeof(int));
  printf("array1:");
  for(int i = 0; i < n; i++) printf(" %d", a[i]);
  printf("\narray2:");
  for(int i = 0; i < n; i++) printf(" %d", b[i]);
  printf("\n");
  return 0;
}
