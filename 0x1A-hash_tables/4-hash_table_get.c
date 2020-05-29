#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
        unsigned long int idx;
        hash_node_t *current;

        idx = key_index((const unsigned char *)key, ht->size);
        current = ht->array[idx];
        while (current)
        {
                if (strcmp(current->key, key) == 0)
                {
                        return (current->value);
                }
        }

        return (NULL);
}