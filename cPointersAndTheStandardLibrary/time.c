// Write a C program taking an integer n as command line parameter and sleeping for n seconds. The execution time of the sleep function is measured and displayed.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>

int main (int argc, char *argv[])
{
  int n = atoi(argv[1]);
  time_t beginTime;
  time(&beginTime);
  sleep(n);
  time_t endTime;
  time(&endTime);
  double runtime = (double)(endTime - beginTime);
  printf("sleep duration: %f seconds\n", runtime);
  return 0;
}
