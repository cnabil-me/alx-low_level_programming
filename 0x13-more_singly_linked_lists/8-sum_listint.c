#include "lists.h"
/**
 * sum_listint - returns the sum of int in list
 * @head: list head
 * Return: sum of int in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

