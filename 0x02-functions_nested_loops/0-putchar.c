#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 * A simple program to print '_putchar'
 *
 * Return: 0 (Succes)
 */

int main(void)
{
	char str[] = "_putchar";

	int i;

	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}