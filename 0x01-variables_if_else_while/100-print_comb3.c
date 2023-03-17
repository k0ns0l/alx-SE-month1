#include <stdio.h>
/**
 * main - Entry point
 *
 * A program that prints all possible different combinations of two digits.
 *
 * REQUIREMENT: Numbers must be separated by ',', followed by a space
 * The two digits must be unique
 * You can only use putchar() five times maximum in your code
 * You are not allowed to use any variable of type char
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
