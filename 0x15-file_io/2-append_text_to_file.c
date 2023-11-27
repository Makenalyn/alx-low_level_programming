#include "main.h"

/**
 * append_text_to_file - appends a test to file
 * @filename: name of the file
 * @text_content: cont to append
 *
 * Return: Appended file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t op;

	op = open(filename, O_APPEND);

	close(op);

	return (op);
}
