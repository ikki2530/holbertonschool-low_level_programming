#include "lists.h"
/**
 * list_len - returns the number of elements of a list
 * @h: first element of a list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	int cont = 0;

	p = h;
	while (p->next)
	{
		cont++;
		p = p->next;
	}
	cont++;
	return (cont);
}
