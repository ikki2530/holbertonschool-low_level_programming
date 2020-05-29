#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key to be added or replaced
 * @value: value to be added
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *current, *new;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			if (current->value)
				free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
