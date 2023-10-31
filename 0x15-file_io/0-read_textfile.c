#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer = NULL;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);

	rd = read(op, buffer,letters);

	buffer[letters] = '\0';

	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1)
	{
		free(buffer);
		exit(0);
	}

	free(buffer);

	close (op);

	return (0);

}
