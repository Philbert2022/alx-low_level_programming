#include <stdio.h>

/**
 * main - entry point
 * Description: - Prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0.
 */

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(lett);
	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}
