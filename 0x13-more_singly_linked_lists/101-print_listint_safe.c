#include "lists.h"

void free_this_list(listp_t **head);

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	listp_t *_head, *new_node, *add;

	_head = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = _head;
		_head = new_node;

		add = _head;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_this_list(&_head);
				return (n_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}

	free_this_list(&_head);
	return (n_nodes);
}

