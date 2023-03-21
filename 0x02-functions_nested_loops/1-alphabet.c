#include "main.h"

/**
 *
 * print-alphabet: A simple program to print lowercase letters,
 * in alphabetic order.
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
