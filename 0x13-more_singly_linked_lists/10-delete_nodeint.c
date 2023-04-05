/*
 * file:10-delete_nodeint.c
 * author:Peter Aniefiok
 */

#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint - delete a node in a given position
 * @head: address of the first node
 * @index:Position of the first node
 * Return:1, if success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
