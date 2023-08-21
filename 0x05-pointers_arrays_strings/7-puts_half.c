#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int midpoint;

	if (length % 2 == 1)
	{
		midpoint = (length - 1) / 2;
	}
	else
	{
		midpoint = length / 2;
	}
	for (i = midpoint; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - prints the length of the string
 * @s: parameter
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
