#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		b = a + 1;

		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}

			b++;

		}

	}
	putchar('\n');
	return (0);
}
