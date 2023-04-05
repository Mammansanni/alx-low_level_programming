#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: address of the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *recent;

	recent = malloc(sizeof(listint_t));
	if (!recent)
		return (NULL);

	recent->n = n;
	recent->next = *head;
	*head = recent;

	return (recent);
}
