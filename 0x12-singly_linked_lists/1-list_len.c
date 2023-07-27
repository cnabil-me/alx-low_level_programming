#include "lists.h"

/**
 * list_len - calc number of elements in a linked list
 * @h: Liste head
 * Return: size_t signe liste node count
 */
size_t list_len(const list_t *h)
{
	{
		size_t count = 0;

		while (h)
		{
			h = h->next;
			count++;
		}
		return (count);
	}
}

