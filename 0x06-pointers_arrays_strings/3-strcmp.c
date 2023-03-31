#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: First <char> value
 * @s2: Second <char> value
 *
 * Return: The strcmp() function return an integer less than,
 * equal to, or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
