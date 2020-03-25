#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: first node of the linked list.
 * @idx: index of the list where the new node should be added. Index
 * starts at 0.
 * @n: integer
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *k;

	j = malloc(sizeof(listint_t));
	if (!j || (!(*head) && idx > 0))
		return (NULL);

	j->n = n;

	if (idx == 0)
	{
		j->next = *head;
		*head = j;
		return (j);
	}

	k = *head;

	for (i = 0; k && i < idx; i++)
	{
		if (i == idx - 1)
		{
			j->next = k->next;
			k->next = j;
			return (j);
		}
		k = k->next;
	}
	free(j);
	return (NULL);
}
