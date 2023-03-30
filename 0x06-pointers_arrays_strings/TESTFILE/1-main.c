#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	char s1[89] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);

	ptr = _strncat(s1, s2, 1);

	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);

	return (0);
}
