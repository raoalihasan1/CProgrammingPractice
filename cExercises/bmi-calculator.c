// Write a C program to compute the BMI and display the grade

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float height, weight;

  printf("Input Your Height (In Meters): ");
  scanf("%f", &height);

  printf("Input Your Weight (In Kilograms): ");
  scanf("%f", &weight);

  float BMI = weight / (height * height);
  printf("BMI: %f\n", BMI);

  if(BMI >= 30) printf("Category: Obese\n");
  else if(BMI >= 25) printf("Category: Overweight\n");
  else if(BMI >= 18.5) printf("Category: Healthy\n");
  else printf("Category: Underweight\n");

  return 0;
}
