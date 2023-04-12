#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer containing concatenated string or a NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, size_1, size_2;
	char *concat;

	size_1 = 0;
	size_2 = 0;
	if (s1 == NULL)
		s1 = "";
	else
	{
		while (*(s1 + size_1))
			size_1++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (*(s2 + size_2))
			size_2++;
	}

	concat = malloc(sizeof(char) * (size_1 + size_2 + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; *s1; s1++, i++)
		concat[i] = *s1;
	for (; *s2; s2++, i++)
		concat[i] = *s2;
	concat[i] = '\0';
	return (concat);
}

