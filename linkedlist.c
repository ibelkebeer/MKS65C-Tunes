#ifndef list
#define list

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

void print_list(struct node* cur){
  while(cur -> next){
    printf("Name: %s, Artist: %s\n", cur -> name, cur -> artist);
    cur = cur -> next;
  }
}

void print_node(struct node* cur){
  printf("Name: %s, Artist: %s\n", cur -> name, cur -> artist);
}

void print_artist(struct node* cur, char artist[]){
  cur = find_artist(cur, artist);
  while(strcmp(cur -> artist, artist) == 0){
    printf("Name: %s, Artist: %s\n", cur -> name, cur -> artist);
    cur = cur -> next;
  }
}

struct node* insert_ordered(struct node* cur, char name[], char artist[]){
  struct node* new = calloc(1, sizeof(struct node));
  strcpy(new -> artist, artist);
  strcpy(new -> name, name);
  struct node* first = cur;
  struct node* prev = NULL;
  while(cur -> next && strcmp(artist, cur -> artist) > 0){
    prev = cur;
    cur = cur -> next;
  }
  while(cur -> next && strcmp(artist, cur -> artist) == 0 && strcmp(name, cur -> name) > 0){
    prev = cur;
    cur = cur -> next;
  }
  new -> next = cur;
  if(prev){
    prev -> next = new;
    return first;
  }
  return new;
}

struct node* free_list(struct node* cur){
  if(cur -> next){
    free_list(cur -> next);
  }
  struct node* first = cur;
  free(cur);
  return first;
}

struct node* find_song(struct node* cur, char name[], char artist[]){
  while(cur -> next && (!(strcmp(cur -> name, name) == 0) || !(strcmp(cur -> artist, artist) == 0))){
    cur = cur -> next;
  }
  return cur;
}

struct node* find_artist(struct node* cur, char artist[]){
  while(cur -> next && !(strcmp(cur -> artist, artist) == 0)){
    cur = cur -> next;
  }
  return cur;
}

struct node* del(struct node* cur, char name[], char artist[]){
  struct node* first = cur;
  struct node* prev = NULL;
  while(cur -> next && (!(strcmp(first -> name, name) == 0) || !(strcmp(first -> artist, artist) == 0))){
    prev = cur;
    cur = cur -> next;
  }
  if(prev){
    prev -> next = cur -> next;
    free(cur);
    return first;
  }
  return cur -> next;
}

#endif
