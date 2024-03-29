#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: argument of an integer type
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				k = i * j;

				if (k <= 99)
					_putchar(' ');
				if (k <= 9)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar((k / 10) % 10 + '0');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar(k / 10 + '0');
				}
				_putchar(k % 10 + '0');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
