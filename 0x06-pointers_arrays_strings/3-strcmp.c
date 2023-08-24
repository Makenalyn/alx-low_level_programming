#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == '\0')
		{
			k = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			k = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
			break;
		}
	}
	return (k);
}
