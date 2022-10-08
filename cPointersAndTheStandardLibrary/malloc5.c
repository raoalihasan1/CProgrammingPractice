// Write the function my_realloc that changes the size of a buffer previously allocated with malloc while preserving all or part of the buffer content according to the requested size. The function parameters are: - ptr: buffer address - old_size: current size of the buffer - new_size: new size requested.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void * my_realloc(void *ptr, size_t old_size, size_t new_size) {
    int * resized_array = malloc(new_size);
    memcpy(resized_array, ptr, old_size);
    return resized_array;
}

int main(int argc, char **argv) {
    
    int *array = malloc(5 * sizeof(int));
    if(!array) return -1;

    for(int i=0; i<5; i++) {
        array[i] = i*10;
        printf("before realloc, array[%d] = %d\n", i, array[i]);
    }

    array = my_realloc(array, 5*sizeof(int), 10*sizeof(int));
    if(!array) return -1;

    for(int i=5; i<10; i++)
        array[i] = i*10;

    for(int i=0; i<10; i++)
        printf("after realloc, array[%d] = %d\n", i, array[i]);

    free(array);
    return 0;
}

