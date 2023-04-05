#include "main.h"
#include <string.h>

int pal_check(char *s, unsigned int i, unsigned int len);

/**
 * is_palindrome - check if a passed string is palindrome or not
 * @s: a string to be checked
 * Return: - if a string is a palindrome, returns 1
 *         - if not, reutrns 0
 */

int is_palindrome(char *s)
{
	unsigned int len;

	len = strlen(s);
	return (pal_check(s, 0, len));
}

/**
 * pal_check - checks each charcter by each side of a string if there are same.
 * @s: a string to be checked.
 * @i: counter for left side of string.
 * @len: a length of string and counter for right side of string.
 * Return: if is palindrome return 1
 *         if not , returns 0
 */

int pal_check(char *s, unsigned int i, unsigned int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pal_check(s, i + 1, len - 1));
}
