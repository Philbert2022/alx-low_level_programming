#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: Normal string
 * @s2: a string with special character
 * Return: -if the strings can be considered identical, returns 1
 *         -otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
