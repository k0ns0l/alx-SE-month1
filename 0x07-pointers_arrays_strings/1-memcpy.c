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
	while (n--)
		*dest++ = *src++;

	return (dest);
}
