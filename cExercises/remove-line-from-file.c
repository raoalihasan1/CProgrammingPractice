// Write a C program to remove a specific line from a text file and wrtie back the modified file.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  if(argc != 3) {
    printf("[ERROR] Incorrect Format Of Elements!\nUsage: %s <file-path> (0 | 1)\n", argv[0]);
    printf("0: Write Back To The Input File\n1: Write To Another File\n");
    return 1;
  }

  FILE *file;
  FILE *output;
  const char *read = (atoi(argv[2]) == 0) ? "a+" : "r";

  char *output_file;

  if(atoi(argv[2]) == 1) {
    output_file = malloc(sizeof(char) * 256);
    if(output_file == NULL) {
      printf("[ERROR] Memory Allocation Error!\n");
      return 1;
    }
    printf("Enter The Output File Name: ");
    scanf("%255s", output_file);
    output = fopen(output_file, "w+");
    if(output == NULL) {
      printf("[ERROR] Couldn't Open Output File!\n");
      return 1;
    }
  } 

  file = fopen(argv[1], read);

  if(file == NULL) {
    printf("[ERROR] Couldn't open Input File!\n");
    return 1;
  }

  int line_num;
  printf("Enter The Line Number To Remove: ");
  scanf("%d", &line_num);

  char *buffer;
  long buffer_size;

  if(fseek(file, 0L, SEEK_END) == 0) {
    buffer_size = ftell(file);
    if(buffer_size == -1) {
      printf("[ERROR] File Size Error!\n");
      return 1;
    }   
    buffer = malloc(sizeof(char) * (buffer_size + 1));
    if(buffer == NULL) {
      printf("[ERROR] Memory Allocation Error!\n");
      return 1;
    } else if(fseek(file, 0L, SEEK_SET) != 0) {
      printf("[ERROR] File Seek Error!\n");
      return 1;
    } else {
      size_t new_len = fread(buffer, sizeof(char), buffer_size, file);
      if(ferror(file) != 0) {
        printf("[ERROR] File Read Error!\n");
        return 1;
      } else {
        buffer[new_len++] = '\0';
      }
    }
  } else {
    printf("[ERROR] File Seek Error!\n");
    fclose(file);
    return 1;
  }

  if(line_num > sizeof(buffer) - 1) {
    printf("[ERROR] Line Number Is Greater Than File Size!\n");
    fclose(file);
    return 1;
  }

  if(atoi(argv[2]) == 0) {
    fclose(file);
    while(remove(argv[1]) != 0) continue;
    file = fopen(argv[1], "w+");
    if(file == NULL) {
      printf("[ERROR] Couldn't Open Input File!\n");
      return 1;
    }
  }

  for(int i = 0; i < buffer_size; i++) {
    if(!(line_num - 1)) while(*(buffer + i) != '\n') i++;
    if(*(buffer + i) == '\n') {
      line_num--;
      if(!(line_num - 1)) continue;
    }
    if(atoi(argv[2]) == 0) {
      fputc(*(buffer + i), file);
    } else {
      fputc(*(buffer + i), output);
    }    
  } 

  fclose(file);
  if(atoi(argv[2]) == 1) fclose(output);
  free(buffer);

  return 0;
}

