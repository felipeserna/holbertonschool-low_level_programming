#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			length += 1;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			length += 1;
		}
	}
	return (length);
}
