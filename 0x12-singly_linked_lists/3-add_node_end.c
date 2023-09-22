#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: parameter
 * @str: parameter
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int length;
	char *newstr;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	newstr = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;


	new->next = NULL;
	new->len = length;
	new->str = newstr;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
