#include "lists.h"
/**
 * free_list - free all node mem
 * @head: list head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p;

	while ((p = head) != NULL)
	{
		head = head->next;
		free(p->str);
		free(p);
	}
}

