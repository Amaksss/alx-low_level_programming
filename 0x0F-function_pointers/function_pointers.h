<<<<<<< HEAD
#ifndef FUNCTION_POINTERS_H
=======
#ifndef FUNCTIONS_POINTERS_H
>>>>>>> cd788b8fc0be3897d6c10f038d7af422541dcef7
#define FUNCTIONS_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

<<<<<<< HEAD
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
=======
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
>>>>>>> cd788b8fc0be3897d6c10f038d7af422541dcef7

#endif
