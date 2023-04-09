#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest : <char> pointer to destination parameter
 * @src : <char> pointer to source param
 *
 * @n : <int> no of bytes - parameter
 *
 * Return: (*dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	for (j = 0; j < 1000; j++)
	{
		if (dest[j] == '\0')
			break;
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
