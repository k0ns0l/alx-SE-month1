#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the first occurrence of a character @c param
 * @s: <str> String - UNREFINED
 * @c: <char> to find
 *
 * Return: <ptr> to @c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
