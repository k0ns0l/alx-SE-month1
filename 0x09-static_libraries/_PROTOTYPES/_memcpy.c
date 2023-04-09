#include "main.h"

/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 * @dest: memory area destination
 * @src: memory area source
 * @n: bytes size parameter
 *
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest; /* Placeholder for <ptr> @dest parameter */

	const char *s = src; /* SAFETY: src cannot be modified */

	while (n--)
		*d++ = *s++;

	return (dest);
}
