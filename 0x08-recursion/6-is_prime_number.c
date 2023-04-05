#include "main.h"

int rec_prime_num(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: is the number to check
 * Return: if the input integer is a prime number, returns 1
 *         otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (rec_prime_num(n, n - 1));
}

/**
 * rec_prime_num - finds if a passed number is prime number recursively
 * @n: a number to check
 * @i: iterator and  a divisor
 * Return: If n is divisable by each one of iterator, returns 0
 *         If iterator reaches one, returns 1
 */

int rec_prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (rec_prime_num(n, i - 1));
}
