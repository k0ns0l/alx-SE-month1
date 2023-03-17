#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all the numbers of base 16 in lowercase,
 * followed by a new line. - 0123456789abcdef
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	char number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
