#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: first node in the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list_end;
	listint_t *tmp;

	list_end = malloc(sizeof(listint_t));

	if (list_end == NULL)
	{
		return (NULL);
	}
	list_end->n = n;
	list_end->next = NULL;

	if (*head == NULL)
	{
		*head = list_end;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = list_end;
	}
	return (list_end);
}
