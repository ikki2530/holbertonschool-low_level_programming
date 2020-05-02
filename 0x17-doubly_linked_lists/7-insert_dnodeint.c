#include "lists.h"
/**
 * dlistint_len - length of a doubly linked list dlistin_t
 * @h: head of the doubly linked list
 * Return: number of elements of the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int lg = 0;

	if (h == NULL)
		return (lg);
	while (current)
	{
		lg++;
		current = current->next;
	}
	return (lg);
}
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
	unsigned int pos = 0, lg;

	if (*h == NULL && idx == 0)
	{
		current = add_dnodeint(h, n);
		return (current);
	}
	if (*h == NULL && idx > 0)
		return (NULL);
	lg = dlistint_len(*h);
	if (lg == idx)
	{
		current = add_dnodeint_end(h, n);
		return (current);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		current = add_dnodeint(h, n);
		return (current);
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
