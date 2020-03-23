#include "lists.h"
#include <string.h>
/**
 * _strlen -  returns the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node in the list
 * @str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list_end;
	list_t *tmp;

	list_end = malloc(sizeof(list_t));

	if (list_end == NULL)
	{
		return (NULL);
	}
	list_end->str = strdup(str);
	list_end->len = _strlen(str);
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
