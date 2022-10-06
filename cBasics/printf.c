// Write a C program displaying a large 11x9 characters 'C' using dashes

#include <stdio.h>

int main (int argc, char *argv[])
{
  printf("    ######\n");
  printf("  ##      ##\n");
  for(int i = 0; i < 5; i++) printf(" #\n");
  printf("  ##      ##\n");
  printf("    ######\n");
  return 0;
}
