#include "lists.h"

/**
 * add_node - Addes a new head to the list
 * @head: parameter
 * @str: parameter
 *
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	char *newstr;
	int length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	newstr = strdup(str);

	if (newstr == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new->str = newstr;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
