#include "main.h"
/**
 * _strncpy - copies from source to destination
 * @dest: destination
 * @src: source
 * @n: numbr of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
