#include "lists.h"
#include <stdio.h>
/**
 * print_element - prints each element of the list
 * @h: list element
 * Return: Nothing
 */
void print_element(const list_t *h)
{
	if (h->str != '\0')
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
}

/**
 * print_list - prints all elements of a list
 * @h: first element of a list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		print_element(h);
		h = h->next;
		i++;
	}
	print_element(h);
	i++;
	return (i);
}
