#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copy contents of src to dest
 * @dest: destination
 * @src: source
 * @n; int*
 * Return: *dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;

	const char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}

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
 * argstostr - Concatenates all strings in a given array into a
 * single string, separated by new line characters.
 * @ac: the number of strings in the array
 * @av: the array of strings to concatenate
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;

	int i, pos, total_len = 0;

	int len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for ( ; i < ac; i++)
		total_len += _strlen(av[i]);
	total_len += ac;

	str = malloc((total_len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);

		_memcpy(str + pos, av[i], len);
		pos += len;

		if (i < ac - 1)
		{
			str[pos] = '\n';

			pos++;
		}
	}
	str[total_len] = '\0';

	return (str);
}
