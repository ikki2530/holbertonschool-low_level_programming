#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: head of the linked list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	int cont = 0;

	if (h == NULL)
		return (cont);
	current = h;
	while (current)
	{
		cont++;
		current = current->next;
	}
	return (cont);
}
