// Write a C program reading two strings from the standard input using fgets, and indicating if the strings are similar or not.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char str1[100];
  char str2[100];
  printf("input string1:\n");
  fgets(str1, sizeof(str1), stdin);
  printf("input string2:\n");
  fgets(str2, sizeof(str2), stdin);
  if(strcmp(str1, str2)) printf("strings are different\n");
  else printf("strings are similar\n");
  return 0;
}
