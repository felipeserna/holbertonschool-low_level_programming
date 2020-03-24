#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: first element of the listint_t singly linked list.
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return;

	node = head;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
