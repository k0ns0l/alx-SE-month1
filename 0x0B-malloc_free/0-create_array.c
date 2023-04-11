#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create arrays of characters
 * @size: the size of the memory
 * @c: character to define
 * Return: pointer to array; or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ch = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	else if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
