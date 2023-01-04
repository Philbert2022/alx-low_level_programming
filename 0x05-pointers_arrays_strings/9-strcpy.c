#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: first argument
 * @src: second argument
 * Return: a character
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];
	dest[n] = '\0';
	return (dest);
}

