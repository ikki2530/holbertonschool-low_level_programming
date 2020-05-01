#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the doubly linked list
 * Return: number of elements of the doubly linked list
**/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int cont = 0;

	if (h == NULL)
		return (cont);
	while (current)
	{
		cont++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (cont);
}
