#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to char
 * @b: <char> b
 * @n: no of <bytes> to fill in memory
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;

		n--;
	}
	return (s);
}
