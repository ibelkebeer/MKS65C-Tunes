#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.c"
#include "linkedlist.c"

int main(){
  struct library* lib = calloc(1, sizeof(struct library));
  free(lib);
  int i;
  for(int i = 0; i < 27; i ++){
    lib -> table[i] = calloc(1, sizeof(struct node*));
  }
  char name[] = "Baby Shark";
  char artist[] = "god";
  insert_song_lib(lib, name, artist);
  print_library(lib);
  return 0;
}
