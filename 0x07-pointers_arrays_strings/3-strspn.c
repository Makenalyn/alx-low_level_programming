#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: Pointer to string
 * @accept: The subprefix to be searched for in string s
 *
 * Return: count - the number of occurence of chars singularly
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			while (accept[j] == s[i])
			{
				count++;
				i++;
				j++;
			}
		}
		i++;
	}
	return (count);
}
