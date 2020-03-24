#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list.
 * @index: index of the node, starting at 0.
 * @head: first node of the linked list.
 * Return: nth node of a listint_t linked list. NULL if the
 * node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (head);
}
