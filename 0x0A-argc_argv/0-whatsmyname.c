#include "main.h"
#include <stdio.h>

/**
 * main - function which prints arg[0] value
 * @argc: arg count <int>
 * @argv: arg values (array)
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
