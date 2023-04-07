#include "main.h"

/**
 * is_prime_number - finds prime of a number
 * @n: integer num
 * Return: 0, otherwise 1
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	int factor;

	factor = 5;

	int inc;

	inc = 2;

	while (inc * inc <= n)
	{
		if (n % inc == 0)
			return (0);
		/* only check odd factor */
		inc += factor;


		/* alternate between 2 and 4 */
		factor = 6 - factor;
	}
	return (1);
}
