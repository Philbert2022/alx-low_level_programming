#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: parameter of an integer
 * Return: an integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
