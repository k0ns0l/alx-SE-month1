#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: function argument, to check if digit provided is within [a-z].
 *
 * Return: 1 (@arg - c is lowercase, otherwise return 0).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
