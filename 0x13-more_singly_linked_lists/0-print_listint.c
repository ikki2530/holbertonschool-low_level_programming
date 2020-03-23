#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list.
 * @h: head of the linked lists
 * Return: NUmber of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	int cont = 0;

	if (h == NULL)
		return (cont);
	current = h;
	while (current)
	{
		cont++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (cont);
}
