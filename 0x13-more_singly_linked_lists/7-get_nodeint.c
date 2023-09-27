#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: parameter
 * @index: parameter
 *
 * Return: nTH index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nd;
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (count <= index)
		{
			if (count == index)
			{
				nd = head;
				break;
			}
			head = head->next;
			count++;
		}
		else
		{
			return (NULL);
		}
	}
	return (nd);
}
