#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	do
	{
		printf("%d\n", h->n);
		h = h->next;
		length += 1;
	}while (h != NULL);
	return (length);
}
