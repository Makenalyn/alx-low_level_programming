#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - generates the index of the key
 * @key: the key of the hash table
 * @size: size of the hash table
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keyindex;
	unsigned long int hashkey;

	hashkey = hash_djb2(key);
	keyindex = hashkey % size;

	return (keyindex);
}
