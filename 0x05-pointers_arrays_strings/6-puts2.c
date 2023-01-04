#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a character pointer
 * Return: void
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		if (count % 2 == 0)
			_putchar(str[count]);
	_putchar('\n');
}

