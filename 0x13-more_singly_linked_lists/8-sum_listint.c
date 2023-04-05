#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - return the sum of all the data in a list
 * @head: first node in the linked list hereinafter referred to as arm
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int agg = 0;
	listint_t *arm = head;

	while (arm)
	{
		agg += arm->n;
		arm = arm->next;
	}

	return (agg);
}
