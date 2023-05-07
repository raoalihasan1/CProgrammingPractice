// Write a C program to merge two linked lists where the elements of the linked list are passed trhough the terminal.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int val;
    struct node *next;
};

int main(int argc, char *argv[])
{

  int sep = 0;
  for(int i = 0; i < argc; i++) {
    if(!strcmp(argv[i], "-")) sep++;
  }

  if(sep != 1 || argc == 1){
    printf("[ERROR] Incorrect Format Of Elements! Look At the Method Below\n Usage: %s <list1> - <list2>\n", argv[0]);
    return 1;
  }

  struct node *list1 = malloc(sizeof(struct node));
  
  if(list1 == NULL) {
    printf("[ERROR] Memory Allocation Failed!\n");
    return 1;
  }

  struct node *list2 = malloc(sizeof(struct node));

  if(list2 == NULL) {
    printf("[ERROR] Memory Allocation Failed!\n");
    return 1;
  }

  struct node *list3 = malloc(sizeof(struct node));

  if(list3 == NULL) {
    printf("[ERROR] Memory Allocation Failed!\n");
    return 1;
  }

  struct node *list_1_head = list1;
  struct node *list_2_head = list2;
  struct node *list_3_head = list3;

  struct node *list_1_head_2 = list1;
  struct node *list_2_head_2 = list2;

  int completed_1, list_1_count, list_2_count;

  printf("[STARTING] Merging The Two Linked Lists!\n\n");

  for(int i = 1; i < argc; i++) {
   if(!completed_1){
      list1->val = atoi(argv[i]);
      if(!strcmp(argv[i + 1], "-")) {
        completed_1 = 1;
        continue;
      }
      list1->next = malloc(sizeof(struct node));
      if(list1->next == NULL) {
        printf("[ERROR] Memory Allocation Failed!\n");
        return 1;
      }
      list1 = list1->next;
      list_1_count++;
    } else {
      if(!strcmp(argv[i], "-")) continue;
      list2->val = atoi(argv[i]);
      list2->next = malloc(sizeof(struct node));
      if(list2->next == NULL) {
        printf("[ERROR] Memory Allocation Failed!\n");
        return 1;
      }
      list2 = list2->next;
      list_2_count++;
    }
  }

  printf("Linked List 1 Before Merge:\n");
  
  for(int i = 0; i < list_1_count; i++) {
    printf("%d -> ", list_1_head->val);
    list_1_head = list_1_head->next;
  }
  
  printf("NULL\n\n");

  printf("Linked List 2 Before Merge:\n");
  
  for(int i = 0; i < list_2_count; i++) {
    printf("%d -> ", list_2_head->val);
    list_2_head = list_2_head->next;
  }
  
  printf("NULL\n\n");

  for(int i = 0; i < list_1_count; i++){
    list3->val = list_1_head_2->val;
    list3->next = malloc(sizeof(struct node));
    if(list3->next == NULL) {
      printf("[ERROR] Memory Allocation Failed!\n");
      return 1;
    }
    struct node *tmp = list_1_head_2;
    list3 = list3->next;
    list_1_head_2 = list_1_head_2->next;
    free(tmp);
  }
  
  for(int i = 0; i < list_2_count; i++){
    list3->val = list_2_head_2->val;
    list3->next = malloc(sizeof(struct node));
    if(list3->next == NULL) {
      printf("[ERROR] Memory Allocation Failed!\n");
      return 1;
    }
    struct node *tmp = list_2_head_2;
    list3 = list3->next;
    list_2_head_2 = list_2_head_2->next;
    free(tmp);
  }

  printf("Linked List After Merging:\n");
  
  for(int i = 0; i < (list_1_count + list_2_count); i++) {
    printf("%d -> ", list_3_head->val);
    struct node *tmp = list_3_head;
    list_3_head = list_3_head->next;
    free(tmp);
  }
  
  printf("NULL\n");
  
  printf("\n[COMPLETED] Successfully Merged The Linked Lists!\n");

  return 0;
}
