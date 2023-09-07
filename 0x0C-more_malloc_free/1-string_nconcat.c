#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: size of bytes
 *
 * Return: memory address of the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0;
	char *mem;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	mem = malloc(sizeof(char) * (s1[i] + n + 1));

	if (mem == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		mem = s1;
		i++;
	}

	mem = mem + s2[i + j] + 1;

	return (mem);
}

