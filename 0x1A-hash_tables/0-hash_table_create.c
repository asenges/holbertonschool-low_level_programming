#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 *
 * Return: hash_table_t
 * @size: unsigned long int
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_hasht = NULL;

	if (!size || size == 0)
		return (NULL);
	new_hasht = malloc(sizeof(hash_table_t));
	if (!new_hasht)
		return (NULL);
	new_hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hasht->array)
	{
		free(new_hasht);
		return (NULL);
	}
	new_hasht->size = size;
	for (i = 0; i < size; i++)
		new_hasht->array[i] = NULL;
	return (new_hasht);
}
