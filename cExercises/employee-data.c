// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received 
// per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char emp_id[10];
  float hours_worked, hourly_rate;

  printf("Enter employee ID: ");
  fgets(emp_id, 10, stdin);

  printf("Enter Total Hours Worked In A Month: ");
  scanf("%f", &hours_worked);

  printf("Enter Hourly Rate: ");
  scanf("%f", &hourly_rate);

  printf("\nEmployee ID = %s", emp_id);
  printf("Salary = £%.2f\n", hours_worked * hourly_rate);

  return 0;
}
