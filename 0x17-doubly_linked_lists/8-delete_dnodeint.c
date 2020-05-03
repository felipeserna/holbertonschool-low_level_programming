#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: first node of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete = NULL;

	if (!head || !(*head))
		return (-1);
	node_to_delete = *head;
	while (index != 0 && node_to_delete)
	{
		index = index - 1;
		node_to_delete = node_to_delete->next;
	}
	if (index == 0 && node_to_delete)
	{
		if (node_to_delete->prev)
			(node_to_delete->prev)->next = node_to_delete->next;
		if (node_to_delete->next)
			(node_to_delete->next)->prev = node_to_delete->prev;
		if (node_to_delete == *head)
			*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}
	return (-1);
}
