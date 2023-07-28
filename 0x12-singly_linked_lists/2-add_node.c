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
 * add_node - add node to the liste
 * @head:liste head
 * @str:string to be dupplicated
 * Return:the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_ptr = (char *) strdup(str);
	list_t *new_node;

	if (!str_ptr)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = str_ptr;
	new_node->len = _str_len(str_ptr);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

