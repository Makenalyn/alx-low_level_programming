#include "main.h"

/**
 * rev_string - reverse a string
 * @s: parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int leng = _strlen(s);
	int strnull = leng - 1;

	while (strnull > 0)
	{
	swap(s + strnull, s + i);
	{
		i++;
		strnull--;
	}
	}
}

/**
 * _strlen - calculates the length of a string
 * @s: parameter
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	return (count);
}

/**
 * swap - swaps the characters
 * @p: first variable
 * @q: second variable
 *
 * Return: void
 */
void swap(char *p, char *q)
{
	char temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
