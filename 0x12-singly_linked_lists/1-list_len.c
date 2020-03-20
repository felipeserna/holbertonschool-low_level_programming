#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
