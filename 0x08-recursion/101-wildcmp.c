#include "main.h"

/**
 * wildcmp - Checks if two strings are equal
 * @s1: 1st string param
 * @s2: 2nd string param
 * Return: 1 (positive), else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
