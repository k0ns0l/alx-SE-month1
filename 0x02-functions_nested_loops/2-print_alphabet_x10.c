#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabets in multiple lines.
 *
 * Description: This function prints characters [a-z] using a while loop.
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 9)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		count++;
	}
}
