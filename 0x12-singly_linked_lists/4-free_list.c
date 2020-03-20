#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: first element of a list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *n;

	current = head;

	if (head)
	{
		while (current != NULL)
		{
			if (current->str)
				free(current->str);
			n = current->next;
			free(current);
			current = n;
		}
	}
}
