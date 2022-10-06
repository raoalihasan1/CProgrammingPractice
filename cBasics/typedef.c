// The program below prints the dimensions of a rectangle passed from the command line arguments. Modify this program to use typedef to alias: struct s_rectangle into rectangle and unisgned long long int to ull.

#include <stdio.h>
#include <stdlib.h>

typedef struct s_rectangle {
    unsigned long long int width;
    unsigned long long int length;
} rectangle;

typedef unsigned long long int ull;

void print_rectangle(struct s_rectangle r) {
    printf("Rectangle is %llu x %llu\n", r.width, r.length);
}

int main(int argc, char **argv) {
    rectangle r;
    ull width;
    ull length;

    if(argc == 3) {
        width = atoll(argv[1]);
        length = atoll(argv[2]);

        r.width = width;
        r.length = length;

        print_rectangle(r);
    }

    return 0;
}

