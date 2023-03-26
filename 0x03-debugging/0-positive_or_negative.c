#include <stdio.h>
#include <stdlib.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: always 0 (success)
 */

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
	return (0);

}
