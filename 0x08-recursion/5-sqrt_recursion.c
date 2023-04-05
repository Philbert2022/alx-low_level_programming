#include "main.h"

/**
 * sqrt_result - Finds the natural square root
 * @num: number to its the square root
 * @res: result of num's squareroot
 * Return: If the number does not have a natural square root - -1
 *         If the number has a natural square root - the square root
 */

int sqrt_result(int num, int res)
{
	if ((res * res) == num)
		return (res);
	if (res == num / 2)
		return (-1);

	return (sqrt_result(num, res + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number to find it's squareroot
 * Return: If n does not have a natural square root, return -1
 *         Otherwise it return the square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_result(n, 0));
}

