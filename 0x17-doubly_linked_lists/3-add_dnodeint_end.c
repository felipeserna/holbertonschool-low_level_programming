#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: first node of the double linked list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = NULL;
	dlistint_t *temp = NULL;

	end_node = malloc(sizeof(dlistint_t));

	if (!end_node)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	if (!(*head))
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		end_node->prev = temp;
		temp->next = end_node;
	}
	return (end_node);
}
