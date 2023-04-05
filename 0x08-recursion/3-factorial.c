#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: a number to find its factorial
 * Return: If n is lower than 0, the function should
 * return -1 to indicate an error
 * any other positive number passed it returns its length
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
