#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the newn node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int cont = 0;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (current)
	{
		if (cont == (idx - 1))
			break;
		cont++;
		current = current->next;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
