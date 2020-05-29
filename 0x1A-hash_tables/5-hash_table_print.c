#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0, i = 0;
	hash_node_t *current;
	int flag = 0;

	if (ht == NULL)
		return;
	size = ht->size;
	current = ht->array[i];
	printf("{");
	for (i = 0; i < size; i++)
	{
		while (current != NULL)
		{
			if (flag > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			flag++;
			current = current->next;
		}
	}
	printf("}\n");
}
