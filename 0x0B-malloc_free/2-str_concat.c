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
 * str_concat - concatenates a string
 * @s1: first string
 * @s2: second string
 * Return: (s1 + s2)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;

	char *result, *temp;

	if (!s1)
		s1 = "";
	else
		len1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		len2 = _strlen(s2);

	result = malloc((len1 + len2) + 1);

	if (!result)
		return (0);

	temp = result;

	while (*s1)
		*temp++ = *s1++;
	while ((*temp++ = *s2++))
		;

	return (result);
}
