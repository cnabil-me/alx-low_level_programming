#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at specified index
 * @head: head of list.
 * @index: index
 * Return: 1 on succeeded, -1 on failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *preview;
	listint_t *next;

	preview = *head;

	if (index != 0)

		for (i = 0; i < index - 1 && preview != NULL; i++)
			preview = preview->next;

	if (preview == NULL || (preview->next == NULL && index != 0))
		return (-1);

	next = preview->next;

	if (index != 0)
	{
		preview->next = next->next;
		free(next);
	}
	else
	{
		free(preview);
		*head = next;
	}

	return (1);
}

