#include "lists.h"
#include <string.h>
/**
 * _strlen -  returns the length of a string.
 *@s: string
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
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: first node in the list
 *@str: string that needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;

	new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->str = strdup(str);
	new_list->len = _strlen(str);
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
