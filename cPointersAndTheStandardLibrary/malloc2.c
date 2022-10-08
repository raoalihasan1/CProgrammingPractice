// Write a C program that takes two integers as command line parameter, x and y, and prints on the standard output y lines of x integers corresponding to the first (x * y) natural integers. The numbers should be stored in a 2-dimensional array allocated with malloc before being printed.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int * twoDimensionalArray = malloc((x * y) * sizeof(int));
  for(int i = 0; i < (x * y); i++) twoDimensionalArray[i] = i;
  int i = 0;
  while(x != 0){
    int j = y;
    while(j != 0){
      printf("%d ", twoDimensionalArray[i++]);
      j--;
    }
    printf("\n");
    x--;
    j = y;
  }
  free(twoDimensionalArray);
  return 0;
}
