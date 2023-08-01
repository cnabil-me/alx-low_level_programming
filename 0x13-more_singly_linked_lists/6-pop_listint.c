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
	listint_t *to_delete;

	if (!head)
	{
		return (0);
	}
	else
	{
		current = *head;
		n = current->n;
		to_delete = current;
		current = current->next;
		free(to_delete);
		*head = current;
		return (n);
	}
}

