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
	int op;
	int rd;

	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		exit(-1);
	}

	if (filename == NULL)
	{
		return (0);
	}

	rd = read(op, buffer, letters);

	if (rd == -1)
	{
		return (-1);
	}

	write(1, buffer, letters);

	if (close(op) < 0)
	{
		exit(1);
	}
	return (rd);
}
