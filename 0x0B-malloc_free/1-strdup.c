#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pinter to new string
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (str == NULL)
	{
		return (0);
	}

	newstr = malloc((i + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}

	strcpy(newstr, str);

	return (newstr);
}
