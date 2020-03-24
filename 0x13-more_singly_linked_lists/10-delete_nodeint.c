#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder, *current;
	unsigned int cont = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (cont == (index - 1))
		{
			if (current->next == NULL)
				return (-1);
			holder = (current->next)->next;
			free(current->next);
			current->next = holder;
			return (1);
		}
		current = current->next;
		cont++;
	}
	return (-1);
}
