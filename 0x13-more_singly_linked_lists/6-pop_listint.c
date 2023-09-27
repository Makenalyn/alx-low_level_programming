#include "lists.h"

/**
 * pop_listint - returns data to the head
 * @head: parameter
 *
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int nn;

	if (*head == NULL)
	{
		return (0);
	}

	p = *head;
	nn = p->n;
	(*head) = (*head)->next;
	free(p);

	return (nn);

}

