#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: first node of the double linked list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element = NULL;

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->prev = NULL;

	if (*head == NULL)
	{
		new_element->next = NULL;
	}
	else
	{
		new_element->next = *head;
		(*head)->prev = new_element;
	}
	*head = new_element;
	return (new_element);
}
