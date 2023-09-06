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
	int i, count;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	newstr = malloc((count + 1) * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	newstr[i] = '\0';

	if (newstr == NULL)
	{
		return (NULL);
	}

	return (newstr);
}
