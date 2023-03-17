#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints the sequence of alphabets, with
 * exception to 'q' and 'e'; followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
