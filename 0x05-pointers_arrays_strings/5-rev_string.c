#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: a charcter pointer
 * Return: void
 */

void rev_string(char *s)
{
	int size = 0, i, j;
	char k;

	while (s[size] != '\0')
		size++;
	i = size - 1;
	j = 0;

	while (i >= 0 && j < i)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
		i--;
		j++;
	}
}
