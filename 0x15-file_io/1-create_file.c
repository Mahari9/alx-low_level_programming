#include "main.h"

/**
 * create_file -  a function creates a file.
 * @filename: the name of the file to be created.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure or if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, file = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, file);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
