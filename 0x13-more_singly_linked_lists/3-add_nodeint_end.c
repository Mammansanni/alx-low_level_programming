#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer of first element in the list
 * @n: data to insert in the new element
 *
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent;
	listint_t *tail = *head;

	recent = malloc(sizeof(listint_t));
	if (!recent)
		return (NULL);

	recent->n = n;
	recent->next = NULL;

	if (*head == NULL)
	{
		*head = recent;
		return (recent);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = recent;

	return (recent);
}
