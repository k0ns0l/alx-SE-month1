#include <stdio.h>
/**
 * main - Entry point
 *
 * A program that prints all possible different combinations of three digits.
 *
 * REQUIREMENT:
 * Numbers must be separated by ',', followed by a space
 * The two digits must be unique
 * You can only use putchar() six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if ((a < b) && (b < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || (a == '7' && b != '8' && c != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
