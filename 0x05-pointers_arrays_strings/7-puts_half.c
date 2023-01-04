#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: a character pointer
 * Return: void
 */

void puts_half(char *str)
{
	int size, i, n;

	for (size = 0; str[size] != '\0'; size++)
		size++;

	n = (size - 1) / 2;

	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
