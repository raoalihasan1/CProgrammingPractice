// Modify the implementation of the function convert_and_print in this program to use strtol for the conversion rather than atoi, and make the program more robust against improper inputs. 

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <limits.h>

int get_string(char *buf, int size) {
    char *ret;

    printf("please enter an integer number (base 10): ");
    ret = fgets(buf, 128, stdin);

    if(ret == NULL) {
        perror("fgets");
        return -1;
    }

    for(int i=0; i<strlen(buf); i++)
        if(buf[i] == '\n') {
            buf[i] = '\0';
            break;
        }

    return 0;
}
int convert_and_print(char *buf) {
    char *endptr;
    long result = strtol(buf, &endptr, 10);
    if(*endptr != '\0'){ 
      printf("invalid string\n");
      return -1;  
    }
    if(errno == ERANGE){
      if(result == LONG_MIN || result == LONG_MAX) printf("under/overflow\n");
      return -1;
    }
    printf("you have entered: %d\n", result);
    return 0;
}

int main(int argc, char **argv) {
    char buf[128];

    if(get_string(buf, 128))
        return -1;

    if(convert_and_print(buf))
        return -1;

    return 0;
}

