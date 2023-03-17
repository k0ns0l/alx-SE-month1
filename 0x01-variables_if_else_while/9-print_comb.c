#include <stdio.h>

/**
 * main - Entry point
 *
 * A simple program that prints all possible combinations of single-digit
 * numbers, separated by ',' followed by a space.
 *
 * REQUIREMENT: Numbers should be printed in ascending order
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
