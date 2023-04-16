#include "main.h"

/**
 * _islower -  checks for lowercase character
 * Description: it takes c as formal parameter checks if is lowercase
 * @c: as an argument of integer as datatype
 * Return: 1 and 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
