#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the doubly linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *node = head;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
}
