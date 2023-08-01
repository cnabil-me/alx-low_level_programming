#include "lists.h"
/**
 * sum_listint - returns the sum of int in list
 * @head: list head
 * Return: sum of int in the list
 */
int sum_listint(listint_t *head)
{
	int sum;
	if (head == NULL)
	{
		return (0);
	}

	for (sum = 0; (head = head->next) && head != NULL; sum += head->n)
		;
	return (sum);
}

