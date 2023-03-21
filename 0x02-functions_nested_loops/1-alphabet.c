#include "main.h"

/**
 * print_alphabet - Print lowercase alphabets
 *
 * Description: This function prints characters a-z using a while loop.
 *
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
