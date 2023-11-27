#include "main.h"

/**
 * read_textfile - reads from a file
 * @filename: name of the file
 * @letters: the number of characters to read
 *
 * Return: letters read
 */
ssize_t read_textfile(const char *filename,
		__attribute__((unused))size_t letters)
{
	size_t rd;
	ssize_t op;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);

		close(op);
	}
	op = open(filename, O_RDONLY);

	rd = read(op, buffer, letters);

	close(op);
	return (rd);
}
