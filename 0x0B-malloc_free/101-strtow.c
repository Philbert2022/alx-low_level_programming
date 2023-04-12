#include "main.h"
#include <stdlib.h>

int letters_count(char *str);

/**
 * strtow -  splits a string into words
 * @str: a string to slipt into words
 * Return: - if str == NULL or str == "", returns NULL
 *         - If your function fails, it should return NULL
 *         - returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int i, j = 0, k, len = 0, word = 0, letter;
	char **strs;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			word++;
			i += letters_count(str + i);
		}
	}
	if (word == 0)
		return (NULL);
	strs = malloc(sizeof(char *) * (word + 1));
	if (strs == NULL)
		return (NULL);
	for (i = 0; i < word; i++)
	{
		while (str[j] == ' ')
			j++;
		letter = letters_count(str + j);
		strs[i] = malloc(sizeof(char) * (letter + 1));
		if (strs[i] == NULL)
		{
			for (; i >= 0; i--)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		for (k = 0; k < letter; k++)
			strs[i][k] = str[j++];
		strs[i][k] = '\0';
	}
	strs[i] = NULL;
	return (strs);
}

/**
 * letters_count - locates the inde for the each end of a word
 * @str: passed string to check words contained in it
 * Return: an index for the end of the word contained in passed string
 */

int letters_count(char *str)
{
	int i, len = 0;

	for (i = 0; *(str + i) && *(str + i) != ' '; i++)
		len++;
	return (len);
}

