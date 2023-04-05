#include "main.h"

/**
 * _strspn - returns nø of bits in initial segment of @s
 * @s: char param
 * @accept: <ptr> to string, to compare
 * Return: Nø of bits (count)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	char *p, *a;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
				count++;
				break;
			}
			if (*a == '\0')
				return (count);
		}
	}
	return (count);
}
