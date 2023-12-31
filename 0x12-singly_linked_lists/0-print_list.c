#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: points to the structure
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		i++;
		h = h->next;
	}

	return (i);
}
