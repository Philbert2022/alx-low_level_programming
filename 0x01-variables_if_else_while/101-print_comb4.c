#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int num = 0, num2 = 1, num3 = 2;

	while (num <= 7)
	{
		num2 = num + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar(num % 10 + '0');
				putchar(num2 % 10 + '0');
				putchar(num3 % 10 + '0');
				if (num2 != 9 && num != 7 && num3 != 10)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
