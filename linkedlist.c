#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_list(struct node* cur){
  if(cur -> next){
    printf("%d, ",cur -> i);
    print_list(cur -> next);
  }else{
    printf("%d\n", cur -> i);
  }
}

struct node* insert_front(struct node* cur, char name[100], char artist[100]){
  struct node* first = calloc(1, sizeof(struct node));
  free(first);
  first -> name = name;
  first -> artist = srtist;
  first -> next = cur;
  return first;
}

struct node* insert_ordered(struct node* cur, char name[100], char artist[100]){
  struct node* new = calloc(1, sizeof(struct node));
  free(new);
  first
}

struct node* free_list(struct node* cur){
  if(cur -> next){
    free_list(cur -> next);
  }
  struct node* first = cur;
  free(cur);
  return first;
}
