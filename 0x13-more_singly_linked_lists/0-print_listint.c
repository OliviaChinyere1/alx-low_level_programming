#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: constant pointer type list_t
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
