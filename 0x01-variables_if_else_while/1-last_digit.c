#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * A simple program to illustrate how if-else conditional statements
 * are constructed in C.
 *
 * To find the last digit of a number, you can use the modulo operator (%).
 * The modulo operator returns the remainder of a division operation. To find
 * the last digit of a number, you can take the modulo of the number with 10.
 * Here's the equation: last_digit = (number % 10)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	} else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, (n % 10));
	} else if (((n % 10) < 6) && ((n % 10) != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));
	}

	return (0);
}
