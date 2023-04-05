/*
 * file: 8-sum_listint.c
 * author: Peter Aniefiok
 */

#include "lists.h"
#include <stdio.h>

/**
 * sum-listint - sum up all the data in listint_t list
 * @head:First node of the linked list
 * Return:resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
