#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tail;

	while (head)
	{
		tail = head->next;
		free(head);
		head = tail;
	}
}
