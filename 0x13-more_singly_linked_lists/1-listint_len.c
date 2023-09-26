#include "lists.h"

/**
 * listint_len - find the length of the linked list
 * @h: parameter
 *
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
