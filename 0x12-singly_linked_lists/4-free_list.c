#include "lists.h"
/**
 * free_list - free all node mem
 * @head: list head
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head);
	head = NULL;
}

