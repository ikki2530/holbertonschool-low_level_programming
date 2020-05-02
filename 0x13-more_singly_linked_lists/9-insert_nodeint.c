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

	if (head == NULL)
		return (NULL);
	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (current)
	{
		if (cont == (idx - 1) && current->next != NULL)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		cont++;
		current = current->next;
	}
	return (NULL);
}
