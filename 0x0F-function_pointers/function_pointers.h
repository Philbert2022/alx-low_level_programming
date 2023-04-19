#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include<stddef.h>
#include<stdlib.h>
void print_name(char *name, void (*f)(char *));
int _piutchar(char c);
void array_iterator(in *array, size_tsize, void(*action(int));
int int_index(int *array, int size, int (cmp)(int));
#endif
