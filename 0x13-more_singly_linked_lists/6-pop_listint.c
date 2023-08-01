#include "lists.h"
/**
 * pop_listint - delete first element in the list
 * @head: list pointer
 * Return: int value of deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)

		return (0);

	current = *head;
	n = current->n;
	*head = current->next;
	free(current);

	return (n);
}

