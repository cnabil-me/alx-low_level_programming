#include "lists.h"
/**
 * find_listint_loop - finds  loop in list
 * @head: head of list
 * Return: node pointer where  loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *_head, *prev;

	_head = head;
	prev = head;
	while (head && _head && _head->next)
	{
		head = head->next;
		_head = _head->next->next;

		if (head == _head)
		{
			head = prev;
			prev = _head;
			while (1)
			{
				_head = prev;
				while (_head->next != head && _head->next != prev)
				{
					_head = _head->next;
				}
				if (_head->next == head)
					break;

				head = head->next;
			}
			return (_head->next);
		}
	}

	return (NULL);
}

