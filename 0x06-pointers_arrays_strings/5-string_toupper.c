#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @str: passed string to change
 * Return: a character point
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] =  str[i] - ('a' - 'A');
	}
	return (str);
}
