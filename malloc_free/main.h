#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
size_t string_length(char* str);
char *str_concat(char *s1, char *s2);
void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
