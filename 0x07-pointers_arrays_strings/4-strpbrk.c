#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string variable
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the first occurenceof bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
