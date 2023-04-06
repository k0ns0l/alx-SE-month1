#include "main.h"

/**
 * factorial - computes factorial of a number
 * @n: int param, n
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
