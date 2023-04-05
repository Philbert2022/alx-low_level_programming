#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string to find its length
 * Return: the length of passed string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
