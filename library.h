struct library {struct node * table[27];};
void print_library(struct library* lib);
void print_artist_lib(struct library* lib, char artist[]);
void clear_library(struct library* lib);
void insert_song_lib(struct library* lib, char name[], char artist[]);
void del_lib(struct library* lib, char name[], char artist[]);
void find_song_lib(struct library* lib, char name[], char artist[]);
void find_artist_lib(struct library* lib, char artist[]);
