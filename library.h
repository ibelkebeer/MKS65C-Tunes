#include "linkedlist.c"

struct library {struct node * table[27];};
void print_library(struct library* lib);
void clear_library(struct library* lib);
void shuffle(struct library* lib);
