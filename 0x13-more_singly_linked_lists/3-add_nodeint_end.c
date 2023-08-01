#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: heder pointer
 * @n: int Number of new node
 * Return: new added node pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new_node && head)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			while (temp->next)
				temp = temp->next;
			temp->next = new_node;
		}
		return (new_node);
	}

	return (NULL);
}

