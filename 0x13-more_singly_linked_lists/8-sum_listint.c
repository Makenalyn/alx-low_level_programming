#include "lists.h"

/**
 * sum_listint - sums all the data in the list
 * @head: parameter
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *start = head;
	size_t sum;

	sum = 0;

	while (start != NULL)
	{
		sum += start->n;
		start = start->next;
	}
	return (sum);
}
