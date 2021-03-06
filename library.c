#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "library.h"
#include "linkedlist.c"

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

void print_artist_lib(struct library* lib, char artist[]){
  print_artist(lib -> table[indexof(artist)], artist);
}

void clear_library(struct library* lib){
  int i;
  for(i = 0; i < 27; i++){
    lib -> table[i] = free_list(lib -> table[i]);
  }
}

void insert_song_lib(struct library* lib, char name[], char artist[]){
  int i = indexof(artist);
  lib -> table[i] = insert_ordered(lib -> table[i], name, artist);
}

void del_lib(struct library* lib, char name[], char artist[]){
  int i = indexof(artist);
  lib -> table[i] = del(lib -> table[i], name, artist);
}

void find_song_lib(struct library* lib, char name[], char artist[]){
  print_node(find_song(lib -> table[indexof(artist)], name, artist));
}

void find_artist_lib(struct library* lib, char artist[]){
  print_artist(lib -> table[indexof(artist)], artist);
}

void shuffle(struct library* lib){
  struct node* cur = lib -> table[rand() % 27];
  while(!(cur -> next)){
    cur = lib -> table[rand() % 27];
  }
  struct node* cpy = cur;
  int i = 0;
  while(cur -> next){
    i++;
    cur = cur -> next;
  }
  int j = rand() % i;
  for(i = 0; i < j; i++){
    cpy = cpy -> next;
  }
  print_node(cpy);
}
