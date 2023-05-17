#include "main.h"
#include <math.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: - the converted number, or 0 if
 *         - there is one or more chars in the string b that is not 0 or 1
 *         - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int shift = 0;
	int index = 0;

	if (b == NULL)
		return (0);
	while ((b[index] == '0') || (b[index] == '1'))
	{
		shift <<= 1;
		shift += b[index] - '0';
		index++;
	}
	if (b[index] != '\0')
		return (0);
	return (shift);
}
