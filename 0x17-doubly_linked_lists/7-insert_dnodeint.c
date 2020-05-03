#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer
 * Return: address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *actual_node = NULL;

	if (!h || (!(*h) && idx > 0))
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	actual_node = *h;
	if (!actual_node)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (idx - 1 != 0 && actual_node->next)
	{
		idx = idx - 1;
		actual_node = actual_node->next;
	}
	if (idx == 1)
	{
		new_node->prev = actual_node;
		new_node->next = actual_node->next;
		actual_node->next = new_node;
		if (new_node->next)
			(new_node->next)->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
