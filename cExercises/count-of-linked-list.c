// Write a program in C to create a singly linked list of n nodes nvalues which are passed through the terminal and count the number of nodes.

#include <stdio.h>
#include <stdlib.h>

struct node {
  int val;
  struct node *next;
};

int main(int argc, char *argv[]) {

  if(argc == 1){
    printf("[ERROR] No Arguments Passed\n");
    return 1;
  }

  struct node *head = malloc(sizeof(struct node));

  if(head == NULL){
    printf("[ERROR] Malloc Failed\n");
    return 1;
  }

  struct node *temp = head;

  for(int i = 1; i < argc; i++) {
    head->val = atoi(argv[i]);
    head->next = malloc(sizeof(struct node));
    if(head->next == NULL){
      printf("[ERROR] Malloc Failed\n");
      return 1;
    }
    head = head->next;
  }
  
  printf("[SUCCESS] Completed Setting Up The Linked List\n");

  for(int i = 0; i < argc - 1; i++) {
    printf("%d -> ", temp->val);
    struct node *temp2 = temp;
    temp = temp->next;
    free(temp2);
  }

  printf("NULL\n");
  printf("There Are %d Nodes in The Linked List\n", argc - 1);
  printf("[SUCCESS] Completed Printing The Linked List\n");

  return 0;

}
  
