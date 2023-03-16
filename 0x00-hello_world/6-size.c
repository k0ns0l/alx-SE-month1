#include <stdio.h>

/**
 * main - Entry point
 *
 * OBJECTIVE :: To illustrate the size of various data(types) on the computer
 * it is compiled and run.
 *
 * PLATFORM :: 32-bit/64-bit architecture
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_;
	int int_;
	long long_;
	long long long__;
	float float_;

	printf("Size of a char: %lu byte(s)\n", sizeof(char_));
	printf("Size of an int: %lu byte(s)\n", sizeof(int_));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long__));
	printf("Size of a float: %lu byte(s)\n", sizeof(float_));

	return (0);
}
