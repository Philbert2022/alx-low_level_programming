#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num % 10 + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
