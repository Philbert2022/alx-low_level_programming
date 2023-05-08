#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: A pointer to the name of the file
 * @letters: number of letters
 * Return: - returns the actual number of letters it could read and print
 *         - if the file can not be opened or read, return 0
 *         - if filename is NULL return 0
 *         - if write fails or does not write the expected amount of bytes,
 *         - return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, opn, wrt;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (opn == -1 || rd == -1 || wrt == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(opn);

	return (wrt);
}
