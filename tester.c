#include <stdio.h>
#include "library.c"

int main(){
  struct library* lib = calloc(1, sizeof(struct library));
  free(lib);
  char name[] = "Baby Shark";
  char artist[] = "god";
  insert_song_lib(lib, name, artist);
  print_library(lib);
  return 0;
}
