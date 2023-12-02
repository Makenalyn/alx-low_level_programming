#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the file created
 * @text_content: content of the file
 *
 * Return: file created
 */
int create_file(const char *filename,
		__attribute__((unused))char *text_content)
{
	int op;

	op = open(filename, O_RDWR | O_CREAT);

	close(op);

	return (op);
}
