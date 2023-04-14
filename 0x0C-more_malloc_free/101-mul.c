#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if value supplied is digit.
 * @c: value to check
 * Return: digit (success)
 */
int is_digit(char c)
{
	/* checks if digit provided is within [0-9] */
	return (c >= '0' && c <= '9');
}

/**
 * parse_number - function to correctly parse-in numbers
 * @s: value to check
 * Return: parsed_digit
 */
int parse_number(char *s)
{
	int result = 0, i = 0;

	while (s[i] != '\0')
	{
		if (!is_digit(s[i]))
		{
			printf("Error\n");
			exit(98);
		}
		result = (result * 10) + (s[i] - '0');

		i++;
	}
	return (result);
}

/**
 * multiply - multiply two digits
 * @num1: first value
 * @num2: second value
 * Return: void
 */
void multiply(int num1, int num2)
{
	int result = (num1 * num2);

	printf("%d\n", result);
}

/**
 * main - Execution HERE ->
 * @argc: argument count - <int>
 * @argv: arguments placeholder - <array>
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int num1, num2;

	/* check if arguments are supplied */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = parse_number(argv[1]);

	num2 = parse_number(argv[2]);

	multiply(num1, num2);
	return (0);
}
