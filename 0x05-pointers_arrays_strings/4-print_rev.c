#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter name
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int smn;

	len = _strlen(s);

	for (smn = len - 1; smn >= 0; smn--)
	{
		_putchar(s[smn]);
	}
	_putchar('\n');
}
/**
 * _strlen - prints the length of the string
 * @s: parameter name
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
