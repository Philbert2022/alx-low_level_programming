#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: points a buffer
 * @size: size of elements of an array
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if ((i + j) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + j));
			if ((j % 2) != 0 && j != 0)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if ((j + i) >= size)
				break;
			else if (isprint(*(b + i + j)))
				printf("%c", *(b + i + j));
			else
				printf(".");
		}
		if (i >= size)
			continue;
		printf("\n");
	}
}
