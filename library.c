#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedlist.c"
#include "library.h"

int indexof(char name[]){
  if(name[0] >= 65 && name[0] <= 90){
    return name[0] - 65;
  }
  return 26;
}

void print_library(struct library* lib){
  int i;
  for(i = 0; i < 27; i++){
    print_list(lib -> table[i]);
  }
}

void print_artist(struct library* lib, char artist[]){
  print_artist(lib -> table[indexof(artist)], artist);
}

void clear_library(struct library* lib){
  int i;
  for(i = 0; i < 27; i++){
    lib -> table[i] = free_list(lib -> table[i]);
  }
}

void insert_song(struct library* lib, char name[], char artist[]){
  int i = indexof(artist);
  lib -> table[i] = insert_ordered(lib -> table[i], name, artist);
}

void del(struct library* lib, char name[], char artist[]){
  int i = indexof(artist);
  lib -> table[i] = del(lib -> table[i], name, artist);
}

struct node* find_song(struct library* lib, char name[], char artist[]){
  return find_song(lib -> table[indexof(artist)], name, artist);
}

struct node* find_artist(struct library* lib, char artist[]){
  return find_song(lib -> table[indexof(artist)], artist);
}
