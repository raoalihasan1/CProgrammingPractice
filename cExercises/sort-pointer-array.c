// Write a program in C to sort an array  using a pointer.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int count;
  printf("Enter The Number Of Elements In The Array: ");
  scanf("%d", &count);

  int *arr[count];
  
  for(int i = 0; i < count; i++) {
    printf("Enter Element %d: ", i + 1);
    scanf("%d", arr + i);
  }

  for(int i = 0; i < count; i++) {
    for(int j = i; j < count; j++) {
      if(*(arr + i) > *(arr + j)) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
      }
    }
  } 
  printf("\nThe Elements In The Array After Sorting Are:\n");
  for(int i = 0; i < count; i++) printf("Element %d: %d\n", i + 1, *(arr + i));
  return 0;
}


