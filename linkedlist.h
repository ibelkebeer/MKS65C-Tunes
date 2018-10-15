struct node {char name[100]; char artist[100]; struct node* next;};
void print_list(struct node* cur);
struct node* insert_front(struct node* cur, char name[100], char artist[100]);
struct node* free_list(struct node* cur);
struct node* insert_ordered(struct node* cur, char name[100], char artist[100]);
