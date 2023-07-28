#include "lists.h"
/**
 * _str_len - calc the length of string
 * @str: string to be calculated
 * Return: int length of string
 */
int _str_len(char *str)
{
	if (!*str)
		return (0);
	return (1 + _str_len(str + 1));
}

/**
 * add_node_end - add node to the end of the list
 * @head:list head
 * @str: string to be dupplicated
 * Return: the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
		return (NULL);
	new_node->len = _str_len(new_node->str);
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}

