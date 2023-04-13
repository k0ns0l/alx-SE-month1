#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: byte-size
 * Return: Pointer to newly allocated space (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	unsigned int len1 = 0, len2 = 0;

	char *result = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	result = (char *) malloc((len1 + n + 1) * sizeof(char));

	if (!result)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
