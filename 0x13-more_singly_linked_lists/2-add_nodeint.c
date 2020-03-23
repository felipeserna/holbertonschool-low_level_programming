#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: first node in the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
