#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list.
 * @head: head of the doubly linked list
 * @n: value fo the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/*it is the las node*/
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}
