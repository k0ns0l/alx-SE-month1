#include "main.h"
#include <stdio.h>

/**
 * main - function which prints all argv passed into cmd prompt
 *
 * @argc: arg count <int>
 * @argv: arg values (array)
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i; /* index for for-loop */

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
