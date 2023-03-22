#include "main.h"

/**
 * print_sign - Function to check parity of user int argument.
 *
 * @n: Integer value, to perform checks on.
 *
 * Return: 1 (IF @n > 0), otherwise return (-1) and (0) if c==0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
