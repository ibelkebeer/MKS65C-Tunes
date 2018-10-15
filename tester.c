#include <stdio.h>
#include "linkedlist.c"

int main(){
  struct node* first = calloc(1, sizeof(struct node));
  free(first);
  strcpy(first -> name, "Hello");
  strcpy(first -> artist, "World");
  print_list(first);
  print_list(insert_ordered(first, "BYOB", "System of a Down"));
  return 0;
}
