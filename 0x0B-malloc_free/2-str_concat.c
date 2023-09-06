#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int strlen = 0;
	int count = 0;
	char *newstring;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		strlen++;
	}

	newstring = malloc(sizeof(char) * strlen);

	if (newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		newstring[count++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		newstring[count++] = s2[i];
	}

	return (newstring);
}
