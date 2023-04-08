#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function to print sum of valid <int> arguments supplied
 * to the commandline.
 * @argc: args count
 * @argv: array to hold all args values
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int i, j; /* INDEX counter */

	char *arg; /* placehold; for all argv[] */

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++) /* Exclude argv[0]; program itself */
	{
		arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
