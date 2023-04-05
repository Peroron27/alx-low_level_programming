/*
 * file:6-pop_listint.c
 * author:Peter Aniefiok
 */

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the first element of a singly linked list
 * @head:A pointer to the list
 * Return:Success, if integer
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
