#include "main.h"

/**
 * print_last_digit - Find the value of last digit supplied to argument.
 * @n: <int> argument.
 * Return: <int> (digit value).
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;

	m = n % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');

	return (m);
}
