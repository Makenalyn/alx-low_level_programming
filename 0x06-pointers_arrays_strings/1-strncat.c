#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: no of bytes to be copied
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int s = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
