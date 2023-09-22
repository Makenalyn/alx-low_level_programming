#include "lists.h"

/**
 * free_list - frees a node
 * @head: parameter
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
