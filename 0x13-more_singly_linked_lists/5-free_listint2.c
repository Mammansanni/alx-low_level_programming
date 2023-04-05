#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tail;

	if (head == NULL)
		return;

	tail = *head

	while (*head)
	{
		tail = tail->next;
		free(tail);
		tail = *head;
	}

	*head = NULL;
}
