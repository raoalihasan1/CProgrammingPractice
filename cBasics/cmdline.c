// Write a C program that takes 3 floating point numbers as command line parameters and displays on the standard boutput the value of the multiplication of these 3 numbers. 

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  printf("%f\n", a * b * c);
  return 0;
}
