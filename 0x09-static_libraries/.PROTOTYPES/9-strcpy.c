#include "main.h"

/**
 * _strcpy - copies the string pointed to by `src`,
 * including the terminating null byte `(\0)`, to the
 * buffer pointed to by dest.
 *
 * @dest: destination param.
 * @src: source param.
 *
 * Return: Pointer to `dest`.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (*(src + i) != '\0')
		i++;

	for ( ; j < i; j++)
		dest[j]	= src[j];

	dest[i] = '\0';
	return (dest);

}
