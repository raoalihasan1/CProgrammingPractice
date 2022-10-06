// Using the structure, write a C program adding two timestamps and displaying the result on the standard output. The program takes 6 command line parameters corresponding to the two timestamps. The addition is realized in a function named add_timestamps that takes 2 timestamp parameters and return the sum as a timestamp.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct timestamp {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
} stmp;

stmp *add_timestamps(stmp *a, stmp *b){
  stmp *result = malloc(sizeof(stmp));
  result->hour = a->hour + b->hour;
  result->minute = a->minute + b->minute;
  if(result->minute > 60){
    int minutes = floor(result->minute/60);
    result->hour += minutes;
    result->minute -= (60 * minutes);
  }
  result->second = a->second + b->second;
  if(result->second > 60){
    int seconds = floor(result->second/60);
    result->minute += seconds;
    result->second -= (60 * seconds);
  }
  return result;
}

int main (int argc, char *argv[])
{
  stmp x, y;
  x.hour = atoi(argv[1]);
  x.minute = atoi(argv[2]);
  x.second = atoi(argv[3]);
  y.hour = atoi(argv[4]);
  y.minute = atoi(argv[5]);
  y.second = atoi(argv[6]);
  stmp *addedTimeStamps = add_timestamps(&x, &y);
  if(addedTimeStamps == NULL) return -1;
  printf("%d %d %d\n", addedTimeStamps->hour, addedTimeStamps->minute, addedTimeStamps->second);
  free(addedTimeStamps);
  return 0;
}
