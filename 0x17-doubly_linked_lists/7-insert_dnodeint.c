#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int pos = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = (*h);
		(*h)->prev = new;
		(*h) = new;
		return (*h);
	}
	current = *h;
	while (current)
	{
		if (pos == (idx - 1) && current->next != NULL)
		{
			new->next = current->next;
			current->next = new;
			new->prev = new->next->prev;
			new->next->prev = new;
			return (new);
		}
		pos++;
		current = current->next;
	}
	return (NULL);
}
