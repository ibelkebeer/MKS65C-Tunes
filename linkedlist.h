#ifndef ll
#define ll

struct node {char name[100]; char artist[100]; struct node* next;};
void print_list(struct node* cur);
struct node* insert_front(struct node* cur, char name[], char artist[]);
struct node* free_list(struct node* cur);
struct node* insert_ordered(struct node* cur, char name[], char artist[]);
struct node* del(struct node* cur, char name[], char artist[]);
struct node* find_artist(struct node* cur, char artist[]);
struct node* find_song(struct node* cur, char name[], char artist[]);
void print_node(struct node* cur);

#endif
