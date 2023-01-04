#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a charcter pointer
 * Return: void
 */

void print_rev(char *s)
{
	int size = 0, i;

	while (s[size] != '\0')
		size++;
	i = size - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

