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
 * _strcpy - copy the string
 * @dest: destination
 * @src: source
 * Return: *ptr to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[i] != '\0')
		i++;
	for ( ; j <= i; j++)
		dest[j]	= src[j];
	dest[i] = '\0';

	return (dest);
}

/**
 * _strcat - concantenates two strings
 * @dest: destination
 * @src: source
 * Return: *ptr to (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++, j++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	size_t len1, len2, _len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);

	len2 = _strlen(s2);

	_len = len1 + len2;

	result = (char*) malloc((_len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	_strcpy(result, s1);
	_strcat(result, s2);

	return (result);
}
