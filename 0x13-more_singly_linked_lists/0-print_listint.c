#include "lists.h"
/**
 * print_listint - print a liste
 * @h: heder pointer
 * Return: count of list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; h = h->next, counter++)
	{
		printf("%d\n", h->n);
	}
	return (counter);
}

