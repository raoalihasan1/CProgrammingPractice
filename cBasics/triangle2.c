// Write a C program taking an odd integer n as parameter and printing an isoscele triangle on the standard output, with the triangle's base length being defined by n.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int num = atoi(argv[1]);
  if(!(num % 2)) num++;
  for(int i = 1; i < ((num / 2) + 1.5); i++){
    int j = i;
    while(j != 0){
      printf("*");
      j--;
    }
    printf("\n");
  }
  for(int i = (num / 2) + 0.5; i > 0; i--){
    int j = i;
    while(j != 0){
      printf("*");
      j--;
    }
    printf("\n");
  }
  return 0;
}
