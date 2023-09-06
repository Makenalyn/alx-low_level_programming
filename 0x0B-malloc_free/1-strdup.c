#include "main.h"
#include <stdlib.h>


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

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	newstr[i] = '\0';

	return (newstr);
}
