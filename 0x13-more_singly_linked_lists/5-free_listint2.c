#include "lists.h"
/**
 * free_listint2 -  free list and set header no null
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *_head = *head;

	while (_head)
	{
		temp = _head;
		_head = _head->next;
		free(temp);
	}
	*head = NULL;
}

