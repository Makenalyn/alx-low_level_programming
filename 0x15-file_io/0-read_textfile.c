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
	/*size_t wr;*/
	ssize_t op;
	size_t rd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);

		close(op);
	}

	if (filename == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);

	rd = read(op, buffer, letters);

	/* wr = write(rd ,buffer ,letters); */

	close(op);
	return (rd);
}
