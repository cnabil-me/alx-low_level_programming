#include "lists.h"
/**
 * free_listint2 -  free list and set header no null
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;

	}

	*head = NULL;
}

