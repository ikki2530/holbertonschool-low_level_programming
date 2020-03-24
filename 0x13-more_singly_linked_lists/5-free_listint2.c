#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *store;

	if (*head != NULL)
	{
		p = (*head);
		while (p)
		{
			store = p->next;
			free(p);
			p = store;
		}
		*head = NULL;
	}
}
