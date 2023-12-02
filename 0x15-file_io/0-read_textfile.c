#include "main.h"

/**
 * read_textfile - reads from a file
 * @filename: name of the file
 * @letters: the number of characters to read
 *
 * Return: letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op;
	ssize_t rd;

	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}

	rd = read(op, buffer, letters);

	write(1, buffer, letters);

	close(op);

	return (rd);
}
