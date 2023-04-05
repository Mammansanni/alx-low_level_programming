#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: first node in the linked list
 * @index: index of the node starting at 0
 *
 * Return: NULL if the node does not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tail = head;

	while (tail && m < index)
	{
		tail = tail->next;
		m++;
	}

	return (tail ? tail : NULL);
}
