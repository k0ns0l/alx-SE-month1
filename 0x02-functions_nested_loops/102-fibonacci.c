#include <stdio.h>

/**
 * main - Prints Fibonacci numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fb0 = 0, fb1 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fb0 + fb1;
		printf("%lu", sum);

		fb0 = fb1;
		fb1 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
