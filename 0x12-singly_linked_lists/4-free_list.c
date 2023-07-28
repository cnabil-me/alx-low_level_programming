#include "lists.h"
/**
 * free_list - free all node mem
 * @head:list head
 * Return: Void
 */
void free_list(list_t *head)
{
	if (!head->next)
		free(head);
	else
		free_list(head->next); /* code */
}

