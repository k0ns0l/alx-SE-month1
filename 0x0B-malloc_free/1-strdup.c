#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @s: string to check
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strdup - duplicate a string
 * @str: string
 * Return: duplicated
 */
char *_strdup(char *str)
{
	int len = _strlen(str);

	char *ch = malloc(sizeof(*ch) * (len + 1));

	if (ch == NULL)
		return (NULL);

	len = 0;

	while (str[len])
	{
		ch[len] = str[len];
		len++;
	}
	return (ch);
}
