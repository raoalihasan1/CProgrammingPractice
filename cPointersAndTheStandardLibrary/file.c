// Write a C program taking as command line parameter A) a file name f and B) a word w. The program then creates the file f-processed which is a copy of f where all occurences of the word w have been deleted. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char str[250];
  char f[100];
  char w[sizeof(argv[2])];
  strcpy(f, argv[1]);
  strcpy(w, argv[2]);
  int i, j, strLen, temp, check = 0;
  FILE *filePointer = fopen(f, "r");
  char fProcessed[150];
  strcpy(fProcessed, f);
  strcat(fProcessed, "-processed");
  FILE *fileProcessedPointer = fopen(fProcessed, "a");
  if(filePointer != NULL){
    if(fileProcessedPointer != NULL){
      while(fgets(str, sizeof(str), filePointer) != NULL){
        strLen = strlen(str);
        for(i = 0; i < strLen; i++){
          temp = i;
          for(j = 0; j < strlen(w); j++){
            if(str[i] == w[j]) i++;
          }
          check = i - temp;
          if(check == strlen(w)){
            i =temp;
            for(j = i; j < (strLen - strlen(w)); j++) str[j] = str[j + strlen(w)];
            strLen -= strlen(w);
            str[j] = '\0';
          }
        }
        fwrite(str , strlen(str), 1, fileProcessedPointer);
      }
    }
    fclose(fileProcessedPointer);
    fclose(filePointer);
  }
  return 0;
}
