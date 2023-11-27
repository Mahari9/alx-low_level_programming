#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to the name of the file.
 * @letters: The number of letters to be read and printed.
 *
 * Return: The actual number of letters it could read and print, or
 * 0 If filename is NULL - 0 or the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *tex;

	if (filename == NULL)
		return (0);

	tex = malloc(sizeof(char) * letters);
	if (tex == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, tex, letters);
	wr = write(STDOUT_FILENO, tex, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(tex);
		return (0);
	}

	free(tex);
	close(op);

	return (wr);
}
