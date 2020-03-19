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
 * add_node - adds a node at the beginning of the list
 * @head: first element of a list
 * @str: data for the new node
 * Return: Number the addres of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = (*head);
	(*head) = new;
	return (*head);
}
