#include "main.h"
#include <stdio.h>

/**
 * main - function which prints nø of args parsed
 * @argc: arg count <int>
 * @argv: arg values (array)
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	(void) argv; /* explicitly cast an unused variable */
	printf("%d\n", argc - 1);
	return (0);
}
