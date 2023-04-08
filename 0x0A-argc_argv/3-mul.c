#include "main.h"
#include <stdio.h>
#include "stdlib.h"

/**
 * main - function to multiply two numbers<int>; prints
 * result to terminal - flollowed by a newline.
 * @argc: <int> args count
 * @argv: <char> array for all args values
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}

	/* Converts argv[]: ASCII -> integer with atoi() */
	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	results = num1 * num2;

	printf("%d\n", results);
	return (0);
}
