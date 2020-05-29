#include "hash_tables.h"

void free_list(hash_node_t *head)
{
        hash_node_t *current;
        hash_node_t *n;

	current = head;

	if (head)
	{
		while (current != NULL)
		{
			if (current->key)
				free(current->key);
                        if (current->value)
                                free(current->value);
			n = current->next;
			free(current);
			current = n;
		}
	}
}

void hash_table_delete(hash_table_t *ht)
{
        unsigned long int sz, i;

        sz = ht->size;

        for (i = 0; i < sz; i++)
        {
                if (ht->array[i] != NULL)
                {
                        free_list(ht->array[i]);
                }
        }
        free(ht->array);
        free(ht);
}