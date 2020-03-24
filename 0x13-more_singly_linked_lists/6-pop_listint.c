#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first node of the linked list
 * Return: the head node's data (n). 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;

	free((*head));
	*head = (*head)->next;
	return (i);
}
