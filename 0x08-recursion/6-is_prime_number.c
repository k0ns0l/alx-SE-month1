#include "main.h"

/**
 * _prime - check prime?
 * @x: num1
 * @y: num2
 * Return: 1 (Positive); else 0
 */

int _prime(int x, int y)
{
	if (y == 1)
		return (1);
	else if (y > 0 && x % y == 0)
		return (0);
	return (_prime(x, y - 1));
}

/**
 * is_prime_number - function to compute IF num is possible prime
 * @n: number to check
 * Return: 1 (Positive); else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
