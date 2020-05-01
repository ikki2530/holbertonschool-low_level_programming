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
