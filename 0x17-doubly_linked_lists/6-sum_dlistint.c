#include "lists.h"
/**
 * sum_dlistint - adds all the data (n) of a dlistint_t linked list.
 * @head: head of the doubly linked list
 * Return: returns the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum = head;
	int result = 0;

	if (head == NULL)
		return (result);

	while (sum)
	{
		result += sum->n;
		sum = sum->next;
	}
	return (result);
}
