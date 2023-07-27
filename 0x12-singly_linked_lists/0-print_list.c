#include "lists.h"

/**
 * print_list - print a sigle liste
 * @h: Liste head
 * Return: size_t signe liste node count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] ", h->str ? h->len : 0);
		printf("%s\n", h->str ? h->str : _NULL);
		h = h->next;
		count++;
	}
	return (count);
}

