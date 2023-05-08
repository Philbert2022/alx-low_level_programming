#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: a pointer to the name of file being created
 * @text_content: content to be written in file
 * Return: - 1 on success
 *         - -1 on failure (file can not be created,
 *             file can not be written, write “fails”, etc…)
 *         - if the file already exists, truncate it
 *         - if filename is NULL return -1
 *         - if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int opn, len = 0, wrt;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
