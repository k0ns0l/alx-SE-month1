#include <stdio.h>

/**
 * main - Entry point
 * A simple program to print all single digit numbers of base10,
 * starting from 0 and ending at 9, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
