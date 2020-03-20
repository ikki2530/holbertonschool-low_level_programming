#include "lists.h"
#include <string.h>
/**
 * _strlen - Prints numbers 0 - 9
 * @s: string to count
 * Return: return the length of a string
 */
int _strlen(const char *s)
{
	int count;
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		count++;
	}
	return (count);
}
/**
 * add_node_end - adds a node at the end of the list
 * @head: first element of a list
 * @str: data for the new node
 * Return: Number the addres of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *p;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	if (*head == NULL)
	{
		(*head) = temp;
		return (*head);
	}
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = temp;
	}
	return (temp);
}
