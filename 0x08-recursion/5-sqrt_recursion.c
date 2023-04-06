#include "main.h"
int _sqrt(int, int);


/**
 * _sqrt_recursion - function to compute natural
 * square-root of integers.
 * @n: <int> param
 * Return: <int>; IF @n not natural number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}



/**
 * _sqrt - check base condition, square-root
 * @x: <int> square-root parameter
 * @y: prod
 * Return: sqrt(x)
 */
int _sqrt(int x, int y)
{
	if (x < 0)
		return (-1);
	else if ((y * y) == x)
		return (y);
	else if ((y * y) > x)
		return (-1);
	else
		return (_sqrt(x, y + 1));
}
