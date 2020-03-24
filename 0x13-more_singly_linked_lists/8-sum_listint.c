#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: first node of the linked list.
 * Return: sum of all the data (n) of a linked list. 0 if the
 * list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
		return (0);

	if (head->next)
		sum += sum_listint(head->next);

		sum += head->n;
	return (sum);
}
