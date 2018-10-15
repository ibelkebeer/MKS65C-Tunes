#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

void print_list(struct node* cur){
  if(cur -> next){
    printf("Name: %s, Artist: %s\n", cur -> name, cur -> artist);
    print_list(cur -> next);
  }else{
    printf("Name: %s, Artist: %s\n", cur -> name, cur -> artist);
  }
}

struct node* insert_front(struct node* cur, char name[100], char artist[100]){
  struct node* first = calloc(1, sizeof(struct node));
  free(first);
  strcpy(first -> name, name);
  strcpy(first -> artist, artist);
  first -> next = cur;
  return first;
}

struct node* insert_ordered(struct node* cur, char name[100], char artist[100]){
  struct node* new = calloc(1, sizeof(struct node));
  free(new);
  strcpy(new -> artist, artist);
  strcpy(new -> name, name);
  struct node* first = cur;
  struct node* prev;
  while(cur -> next && strcmp(artist, cur -> artist) > 0){
    prev = cur;
    cur = cur -> next;
  }
  while(cur -> next && strcmp(artist, cur -> artist) == 0 && strcmp(name, cur -> name) > 0){
    prev = cur;
    cur = cur -> next;
  }
  if(!cur -> next){
    if(strcmp(artist, cur -> artist) > 0){
      cur -> next = new;
      return first;
    }
    if(strcmp(artist, cur -> artist) < 0){
      new -> next = cur;
      if(prev){
        prev -> next = new;
        return first;
      }
      return new;
    }
    if(strcmp(name, cur -> name) > 0){
      cur -> next = new;
      return first;
    }
    new -> next = cur;
    if(prev){
      prev -> next = new;
      return first;
    }
    return new;
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
