#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i = 0, j, n;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;
		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');
			n = i * j;
			if (n < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

