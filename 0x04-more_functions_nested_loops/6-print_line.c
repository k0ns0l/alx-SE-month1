#include "main.h"

/**
 * print_line - convert @n parameters to '_',
 * only when @n param is greater-than 0.
 *
 * @n: integer parameter for which to convert to underscore.
 *
 * Return: void
 */


void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
	}
}
