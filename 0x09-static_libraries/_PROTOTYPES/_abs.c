#include "main.h"

/**
 * _abs - Function to compute absolute value of integer supplied.
 * @n: Integer argument supplied to _abs().
 * Return: <int> (Absolute value of argument).
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	return (-n);
}
