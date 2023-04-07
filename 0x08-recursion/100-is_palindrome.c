#include "main.h"
#include "string.h"

int is_palindrome(char *s);

/**
 * is_palindrome_helper - helper func
 * @s: string s
 * @start: start index
 * @end: end
 * Return: 1 (Sucess)
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen - computes lenght of string
 * @s: string parameter
 * Return: <int>
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 * Return: 1 (positive), else 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}
