#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: heder pointer
 * @n: int Number of new node
 * Return: node header pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node && head)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	return (NULL);
}

