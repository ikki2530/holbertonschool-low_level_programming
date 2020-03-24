#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *store = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		store = (*head)->next;
		free(*head);
		*head = store;
	}
	*head = NULL;
}
