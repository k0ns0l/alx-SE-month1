#include "main.h"

/**
 * _isupper - check is letter is uppercase
 * @c: Character to check
 *
 * Return: 0, otherwise 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
