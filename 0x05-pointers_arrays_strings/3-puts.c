#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout.
 *
 * @str: string parameter (to print).
 *
 * Return: void.
 */

void _puts(char *str)
{
	int i;

	i = 0; /* start count from 0 index */

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
