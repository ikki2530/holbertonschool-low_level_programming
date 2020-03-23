#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of the list
 * @index: is the the index of the node, starting at 0
 * Return: if the node does not exist, return NULL, otherwise returns nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int cont = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current)
	{
		if (cont == index)
			return (current);
		current = current->next;
		cont++;
	}
	return (NULL);
}
