#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: first node of the linked list
 * Return: sum of all the data (n) of a linked list. 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int addition = 0;
	dlistint_t *node;

	node = head;

	while (node)
	{
		addition += node->n;
		node = node->next;
	}
	return (addition);
}
