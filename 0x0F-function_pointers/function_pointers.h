#ifndef function_pointers_h
#define function_pointers_h
#include <string.h>
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
