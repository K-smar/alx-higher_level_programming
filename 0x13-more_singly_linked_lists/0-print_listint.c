#include "lists.h"

/**
*print_listint - prints all elements of a list.
*@h: head of a list.
*
*Return: number of nodes.
*/
size _t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
