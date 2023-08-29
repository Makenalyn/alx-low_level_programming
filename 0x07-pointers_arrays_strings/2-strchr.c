#include "main.h"

/**
 * *_strchr - Locates for a character in string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to the occurence of c, or NULL
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	for (count = 0; (s[count] != '\0') && (s[count] != c); count++)
		;
	if (s[count] == c)
		return (&s[count]);
	else
		return (0);
}
