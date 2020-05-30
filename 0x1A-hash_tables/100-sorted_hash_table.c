#include "hash_tables.h"

/**
 * shash_table_create -create a sorted table
 * @size: size of the hash table
 * Return: a new sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	shash_node_t **node_array = NULL;

	if (size < 1)
		return (NULL);

	table = calloc(1, sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	node_array = calloc(size, sizeof(shash_node_t *));
	if (node_array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = node_array;
	return (table);
}

/**
 * double_slist - Adds the nodes to a double linked list
 * @ht: hash table
 * @new: new node to add
 * Return: 1 on succeeded
 */
int double_slist(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *aux = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	else
	{
		aux = ht->shead;
		if (strcmp(new->key, aux->key) < 0)
		{
			new->snext = aux;
			new->sprev = NULL;
			aux->sprev = new;
			ht->shead = new;
			return (1);
		}
		while (aux->snext && strcmp(new->key, aux->key) > 0)
		{
			aux = aux->snext;
		}
		if (aux->snext == NULL && (strcmp(new->key, aux->key) > 0))
		{
			new->sprev = aux;
			aux->snext = new;
			ht->stail = new;
			return (1);
		}
		new->snext = aux;
		aux->sprev->snext = new;
		new->sprev = aux->sprev;
		aux->sprev = new;
		return (1);
	}
}
/**
 * shash_table_set - Adds nodes to a hash table
 * @ht: hash table
 * @key: key to be found
 * @value: value for new node
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *current, *new;

	if (ht == NULL || key == NULL ||
	(strcmp(key, "") == 0) || value == NULL)
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
	new = calloc(1, sizeof(shash_node_t));
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
	return (double_slist(ht, new));
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: Returns the value associated with the element
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *current;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a double linked lists
 * @ht: hash table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int flag = 0;

	current = ht->shead;

	printf("{");
	while (current)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a double linked lists in reverse
 * @ht: hash table
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int flag = 0;

	current = ht->stail;

	printf("{");
	while (current)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * free_list - frees a list
 * @head: first element of a list
 * Return: Nothing
 */
void free_list(shash_node_t *head)
{
	shash_node_t *current;
	shash_node_t *n;

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
/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int sz, i;

	if (ht == NULL)
		return;

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

