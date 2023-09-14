#include "lists.h"
/**
 * sum_dlistint - sum of d-list
 * @head: lists head
 * Return: the sum of d-list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
