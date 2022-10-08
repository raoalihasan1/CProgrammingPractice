// Write a C program reading a string from the standard input and capitalize the first letter of each word

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char str[500];
  printf("input a string:\n");
  fgets(str, sizeof(str), stdin);
  str[0] = toupper(str[0]);
  for(int i = 1; i < strlen(str); i++){
    if(isspace(str[i])){
      str[i + 1] = toupper(str[i + 1]);
    }
  }
  printf("%s", str);
  return 0;
}
