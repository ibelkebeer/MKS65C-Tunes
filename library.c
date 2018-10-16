#include <stdio.h>
#include "linkedlist.c"
#include "library.h"

void print_library(struct library* lib){
  int i;
  for(i = 0; i < 27; i++){
    print_list(lib -> table[i]);
  }
}
void clear_library(struct library* lib){
  int i;
  for(i = 0; i < 27; i++){
    lib -> table[i] = free_list(lib -> table[i]);
  }
}
void shuffle(struct library* lib){
}
