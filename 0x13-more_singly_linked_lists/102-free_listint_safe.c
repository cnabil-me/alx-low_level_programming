#include "lists.h"
void free_this_list(listp_t **head);

/**
 * free_listint_safe - frees a list safely
 * @h: head of list
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *_header, *new_node, *add;
	listint_t *curr;

	_header = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)*h;
		new_node->next = _header;
		_header = new_node;

		add = _header;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_this_list(&_header);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_this_list(&_header);
	return (nnodes);
}

/**
 * free_this_list - frees a list
 * @head: head of list.
 * Return: void
 */
void free_this_list(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

