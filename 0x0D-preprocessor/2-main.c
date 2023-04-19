#include <stdio.h>
#include <string.h>

/**
 * main - prints the name of the file it was compiled from,
 *        followed by a new line.
 * Return: always on succes 1
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
