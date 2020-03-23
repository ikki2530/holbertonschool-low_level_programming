#include "lists.h"
/**
 * sum_listint - sum all data in a listin_t list
 * @head: head of the list
 * Return: returns the sum of all the data in the listint_t
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head != NULL)
	{
		current = head;
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
