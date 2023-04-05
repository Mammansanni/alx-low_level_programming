#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t unit = 0;

	while (h)
	{
		unit++;
		h = h->next;
	}

	return (unit);
}
