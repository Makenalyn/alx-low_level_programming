#include "lists.h"

/**
 * dlistint_len - lists the length of a linked list
 * @h: name of the list
 *
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
