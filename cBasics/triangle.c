// Write a C program taking an integer as parameter and printing a right-angled triangle on the command line which legs size is defined by the integer parameter.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int num = atoi(argv[1]);
  for(int i = 1; i < num + 1; i++){ 
    int j = i;
      while(j != 0){
        printf("*");
        j--;
      }
    printf("\n");
  }
  return 0;
}
