#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Locates for a character in string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to the occurence of c, or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
