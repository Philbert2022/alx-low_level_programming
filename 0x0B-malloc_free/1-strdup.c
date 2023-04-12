#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: a string to copy
 * Return: on successs it returs a pointer and
 * if it fails it returns NULL
 */

char *_strdup(char *str)
{
	char *arr;
	int i, size;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (*(str + size))
		size++;

	arr = malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; *str; str++, i++)
		arr[i] = *str;
	arr[i] = '\0';

	return (arr);
}
