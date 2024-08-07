#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 *
 * Return: the memory of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	return (table);
}
