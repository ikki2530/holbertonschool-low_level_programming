#include "lists.h"
/**
 * reverse_listint - reverse a listint_t linked list
 * @head: head of the list
 * Return: list in reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nx = NULL, *prev = NULL;

	while (*head)
	{
		nx = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = nx;
	}
	(*head) = prev;
	return (*head);
}
