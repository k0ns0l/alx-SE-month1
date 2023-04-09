#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 *
 * @c: Function argument, to check if digit provided matches regex [a-zA-Z].
 *
 * Return: 1 (IF arg 'c' is alphabet, otherwise return 0).
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
