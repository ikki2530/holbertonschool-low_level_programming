#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the doubly linked list
 * @index: it is the index of the node
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int pos = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current)
	{
		if (pos == index)
			return (current);
		pos++;
		current = current->next;
	}
	return (NULL);
}
