// Write a C program to reverse the word passed in terminal and print the result back to the terminal

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if(argc != 2){ 
    printf("[ERROR] Expected One Argument: Received %d\n", argc - 1);
    return -1;
  }
  char reversed_str[strlen(argv[1])];
  printf("The Reverse Of '%s' Is '", argv[1]);
  for(int i = (strlen(argv[1]) - 1), j = 0; i >= 0, j < strlen(argv[1]); i--, j++){ 
    reversed_str[j] = argv[1][i];
    printf("%c", reversed_str[j]);
  }
  printf("'\n");
  return 0;
}
