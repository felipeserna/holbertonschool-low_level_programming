#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: first element of the dlistint_t list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
	{
		return;
	}

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
