#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line
 * @n: <int> parameter
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j <= n; j++)
			{
				if (i == j)
					_putchar('\\');
				else if (i > j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
