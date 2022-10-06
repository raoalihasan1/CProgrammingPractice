// The program below uses integer to represent days of the week, 0 corresponding to Monday, 1 to Tuesday, etc. Replace the use of integers with that of an enumeration named enum day, defining constants for days: MONDAY, TUESDAY, etc.

#include <stdio.h>

enum day {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

int main(int argc, char **argv) {
    enum day d = WEDNESDAY;

    printf("Today is: ");
    switch(d) {
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
          case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
        case SUNDAY:
            printf("Sunday\n");
            break;
        default:
            printf("Unknown day...\n");
    }
    return 0;
}
