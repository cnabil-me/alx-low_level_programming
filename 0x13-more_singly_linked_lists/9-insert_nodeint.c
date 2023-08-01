#include "lists.h"
/**
 * insert_nodeint_at_index - add node at index
 * @head: list header
 * @idx: the index
 * @n: int number
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *_head = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
	{
		return (NULL);
	}

	for (i = 0; i < idx - 1 && _head != NULL; (_head = _head->next, i++))
		;
	new_node->n = n;
	new_node->next = _head->next;
	_head->next = new_node;

	return (*head);
}

