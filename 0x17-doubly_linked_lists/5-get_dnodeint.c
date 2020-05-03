#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: first node in the list
 * @index: index of the node, starting from 0
 * Return: nth node of a list. NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	while ((i < index) && temp)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	else
		return (temp);
}
