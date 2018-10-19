#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "library.c"
#include "linkedlist.c"

int main(){
  unsigned long seed_time = time(NULL);
  srand(seed_time);
  struct library* lib = calloc(1, sizeof(struct library));
  free(lib);
  int i;
  for(int i = 0; i < 27; i ++){
    lib -> table[i] = calloc(1, sizeof(struct node));
  }
  char name[256] = "Faded";
  char artist[256] = "Allan Walker";
  insert_song_lib(lib, name, artist);
  strcpy(name,"Here");
  strcpy(artist,"Alessia Cara");
  insert_song_lib(lib, name, artist);
  strcpy(name,"Cigaro");
  strcpy(artist,"System of a Down");
  insert_song_lib(lib, name, artist);
  strcpy(name,"Los Angeles");
  strcpy(artist,"Blink 182");
  insert_song_lib(lib, name, artist);
  strcpy(name,"BYOB");
  strcpy(artist,"System of a Down");
  insert_song_lib(lib, name, artist);
  printf("print_list:\n");
  print_library(lib);
  printf("\nfind_node(BYOB, System of a Down):\n");
  find_song_lib(lib, name, artist);
  printf("\nfind_node(Symphony, Clean Bandit):\n");
  strcpy(name, "Symphony");
  strcpy(artist, "Clean Bandit");
  find_song_lib(lib, name, artist);
  printf("\nfind artist(System of a Down): \n");
  strcpy(artist, "System of a Down");
  find_artist_lib(lib, artist);
  printf("\nfind_artist(Clean Bandit):\n");
  strcpy(artist, "Clean Bandit");
  find_artist_lib(lib, artist);
  printf("\nshuffle:\n");
  shuffle(lib);
  shuffle(lib);
  shuffle(lib);
  printf("\ndelete(Here, Alessia Cara):\n");
  strcpy(name,"Here");
  strcpy(artist,"Alessia Cara");
  del_lib(lib, name, artist);
  print_library(lib);
  clear_library(lib);
  printf("\nLIBRARY CLEARED\n=========================\n\nLibrary after clear:\n");
  print_library(lib);
  strcpy(name, "Faded");
  strcpy(artist, "Allan Walker");
  insert_song_lib(lib, name, artist);
  strcpy(name,"Here");
  strcpy(artist,"Alessia Cara");
  insert_song_lib(lib, name, artist);
  strcpy(name,"Cigaro");
  strcpy(artist,"System of a Down");
  insert_song_lib(lib, name, artist);
  strcpy(name,"Los Angeles");
  strcpy(artist,"Blink 182");
  insert_song_lib(lib, name, artist);
  strcpy(name,"BYOB");
  strcpy(artist,"System of a Down");
  insert_song_lib(lib, name, artist);
  printf("\nprint_list after adding:\n");
  print_library(lib);
  printf("\nfind_node(BYOB, System of a Down):\n");
  find_song_lib(lib, name, artist);
  printf("\nfind_node(Symphony, Clean Bandit):\n");
  strcpy(name, "Symphony");
  strcpy(artist, "Clean Bandit");
  find_song_lib(lib, name, artist);
  printf("\nfind artist(System of a Down): \n");
  strcpy(artist, "System of a Down");
  find_artist_lib(lib, artist);
  printf("\nfind_artist(Clean Bandit):\n");
  strcpy(artist, "Clean Bandit");
  find_artist_lib(lib, artist);
  printf("\nshuffle:\n");
  shuffle(lib);
  shuffle(lib);
  shuffle(lib);
  return 0;
}
