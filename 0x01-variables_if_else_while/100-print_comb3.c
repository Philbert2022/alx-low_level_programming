#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int num = 1, i = 0;

	while (num < 90)
	{
		if  (num % 10 == 0)
		{
			i++;
			num += (i + 1);
		}
		putchar((i % 10) + '0');
		putchar((num % 10) + '0');
		if (num < 89)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}

