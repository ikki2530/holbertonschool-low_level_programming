#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the list
 * @head: head of the list
 * @n: data for the new node
 * Return: address of the new node;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		(*head) = new;
		return (*head);
	}
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
