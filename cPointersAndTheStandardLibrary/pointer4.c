// Alter the loop so as to use a char * pointer as the iterator and as the way to access characters within the string for printing. The source code should contain no square bracket. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char *string = "hello, world!\n";

    int i = 0;
    while(*(string + i) != '\0'){
        printf("%c", *(string + i));
        i++;
    }
    return 0;
}
