#include "lists.h"
/**
 * dlistint_len - returns length of d-list
 * @h: head of d-list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
