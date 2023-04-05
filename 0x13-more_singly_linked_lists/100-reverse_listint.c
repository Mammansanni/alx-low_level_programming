#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *forw = NULL;

	while (*head)
	{
		forw = (*head)->forw;
		(*head)->forw = rev;
		rev = *head;
		*head = forw;
	}

	*head = rev;

	return (*head);
}
