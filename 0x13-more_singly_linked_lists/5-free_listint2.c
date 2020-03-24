#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * The function sets the head to NULL.
 * @head: first element of the listint_t singly linked list.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (!head)
	{
		return;
	}

	if ((*head)->next)
	{
		free_listint2(&(*head)->next);
	}
	free((*head));
	*head = NULL;
}
