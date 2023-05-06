// Write a C program to calculate the area and perimeter of a rectangle taking the height and width from the user.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int height, width;

  printf("Enter The Height Of The Rectangle (In Cm): ");
  scanf("%d", &height);

  printf("Enter The Width Of The Rectangle (In Cm): ");
  scanf("%d", &width);

  printf("\nThe Area Of The Rectangle Is: %d\n", width * height);
  printf("The Perimeter Of The Rectangle Is: %d\n", 2 * (width + height));

  return 0;
}
