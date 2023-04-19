#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stddef.h>

/* Function PROTOTYPES - MANDATORY TASKS */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/* Function PROTOTYPES - ADVANCED TASKS */


#endif /* FUNCTION_POINTERS_H */
