#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index "index"
 * of a listint_t linked list.
 * @head: first node of the linked list.
 * @index: index of the node that should be deleteed. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *j;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (!((*head)->next))
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		free(*head);
		*head = (*head)->next;
		return (1);
	}

	j = *head;

	for (i = 0; j && i < index; i++)
	{
		if (i == index - 1)
		{
			if (j->next)
			{
				free(j->next);
				j->next = (j->next)->next;
				return (1);
			}
		}
		j = j->next;
	}
	return (-1);
}
