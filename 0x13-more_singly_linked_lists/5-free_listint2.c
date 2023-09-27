#include "lists.h"

/**
 * free_listint2 - frees list pointing head to NULL
 * @head: parameter
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			p = *head;
			*head = (*head)->next;
			free(p);
		}

	*tmp = NULL;
	}
}
