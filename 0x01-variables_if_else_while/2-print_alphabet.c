#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: program that prints the alphabet in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char num = 'a';

	while (num <= 'z')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
