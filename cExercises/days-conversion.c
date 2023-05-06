// Write a program to convert days into years, weeks and days.

#include <stdio.h>
#include <stdlib.h> 

int main()
{
  int days;

  printf("Enter The Number Of Days: ");
  scanf("%d", &days);

  int years = days / 365;
  int weeks = (days % 365) / 7;
  int days_1 = days - ((years * 365) + (weeks * 7));

  printf("Number Of Years: %d\n", years);
  printf("Number Of Weeks: %d\n", weeks);
  printf("Number Of Days: %d\n", days_1);

  return 0;
}
