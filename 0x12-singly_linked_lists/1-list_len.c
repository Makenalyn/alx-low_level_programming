#include "lists.h"

/**
 * list_len - prints the length of a list
 * @h: parameter
 *
 * Return: the length of the string
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{

		count++;

		h = h->next;
	}


	return (count);
}

