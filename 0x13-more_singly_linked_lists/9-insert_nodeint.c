#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts new node at a defined position
 * @head: pointer to the first node in the list
 * @idx: index of the list where new node is added
 * index to start at 0
 * @n: data to insert in the new node
 *
 * Return: address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *recent;
	listint_t *tail = *head;

	recent = malloc(sizeof(listint_t));
	if (!recent || !head)
		return (NULL);

	recent->n = n;
	recent->next = NULL;

	if (idx == 0)
	{
		recent->next = *head;
		*head = recent;
		return (recent);
	}

	for (m = 0; tail && m < idx; m++)
	{
		if (m == idx - 1)
		{
			recent->next = tail->next;
			tail->next = recent;
			return (recent);
		}
		else
			tail = tail->next;
	}

	return (NULL);
}
