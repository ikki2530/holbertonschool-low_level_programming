#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t list
 * @head: head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *holder;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = temp->n;
	holder = temp->next;
	free(temp);
	(*head) = holder;
	return (value);
}
