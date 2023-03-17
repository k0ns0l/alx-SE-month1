#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints the sequence of lower&uppercase :ALPHABET:
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (char lCase = 'a'; lCase <= 'z'; lCase++)
	{
		putchar(lCase);
	}
	for (char uCase = 'A'; uCase <= 'Z'; uCase++)
	{
		putchar(uCase);
	}
	putchar('\n');
	return (0);
}
