#include "main.h"

/**
 * append_text_to_file - it appends text at the end of a file
 * @filename: a pointer to the file name
 * @text_content: content to be appended to the current content of file
 * Return: - 1 on success and -1 on failure
 *         - If filename is NULL return -1
 *         - If text_content is NULL, do not add anything to the file. Return 1
 *         - -1 if the file does not exist or
 *           if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);
	return (1);
}
