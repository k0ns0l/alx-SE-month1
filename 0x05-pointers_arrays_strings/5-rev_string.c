#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string paramater
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int i, count = 0;

	while (s[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
