#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: head of the list
 * @n: data for the new node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = (*head);
	(*head) = new;
	return (*head);
}
