#include "lists.h"
/**
 * listint_len - calcuate length
 * @h: heder pointer
 * Return: count of list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; h = h->next, counter++)
		;
	return (counter);
}

