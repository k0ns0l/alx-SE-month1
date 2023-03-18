#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible combinations of two-digit numbers,
 * where the first digit is less than the second digit, and no two digits
 * are the same. The program accomplishes this by using nested loops to iterate
 * through all possible pairs of digits, and checking whether they satisfy the
 * above conditions before printing them to the console.
 *
 * In addition, the program pads single-digit numbers with a leading '0',
 * so that all numbers have two digits.
 *
 * The program uses the putchar() function to output characters to the console,
 * and limits its usage to a maximum of eight times.
 *
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
