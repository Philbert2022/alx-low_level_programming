#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: an array containing the  matrix
 * @size: order for the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sdiag_1, sdiag_2;

	sdiag_1 = 0;
	sdiag_2 = 0;
	for  (i = 0; i < size; i++)
	{
		sdiag_1 += a[i];
		a = a + size;
	}
	for (i = 0; i < size; i++)
	{
		a = a - size;
		sdiag_2 = sdiag_2 + a[i];
	}
	printf("%d, %d\n", sdiag_1, sdiag_2);
}

