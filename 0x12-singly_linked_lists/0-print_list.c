#include "lists.h"
/**
 * print_element - prints each element of the list
 * @h: list element
 * Return: Nothing
 */
void print_element(const list_t *h)
{
	if (h->str == '\0')
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
}

/**
 * print_list - prints all elements of a list
 * @h: first element of a list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

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
