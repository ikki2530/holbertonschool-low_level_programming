#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size fo the array
 * Return: A new hash table address
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node_array;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	node_array = calloc(size, sizeof(hash_node_t *));
	if (node_array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = node_array;
	return (table);
}
