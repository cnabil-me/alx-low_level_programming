#include "lists.h"
/**
 * print_listint - print a liste
 * @h: heder pointer
 * Return: count of list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}

