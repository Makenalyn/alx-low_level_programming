#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: parameter
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *lst;

	while (head != NULL)
	{
		lst = head;
		head = head->next;
		free(lst);
	}
}
