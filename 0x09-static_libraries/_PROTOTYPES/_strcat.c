#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: <str> destination parameter
 * @src: <str> source parameter
 *
 * Return: (dest)
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
		i++;
		j++;
	}

	dest[i] = '\0'; /* Last iteration */

	return (dest);
}
