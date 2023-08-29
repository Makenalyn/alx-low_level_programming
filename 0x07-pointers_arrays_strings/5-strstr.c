#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: the full string
 * @needle: the substring
 *
 * Return: address of the first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
