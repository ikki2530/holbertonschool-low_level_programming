#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: head of the doubly linked list
 * @index: position of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *current;
	unsigned int pos = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		(*head) = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	while (current)
	{
		if (pos == (index - 1))
		{
			if (current->next == NULL)
				return (-1);
			temp1 = current->next->next;
			if (temp1 != NULL)
				temp1->prev = current;
			free(current->next);
			current->next = temp1;
			return (1);
		}
		current = current->next;
		pos++;

	}
	return (-1);
}
