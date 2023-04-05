/*
 * file:7-get_nodeint.c
 * author:Peter Aniefiok
 */

#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint - find a node in the list
 * @head:Address of the first node in the list
 * @index:Node position to find
 * Return:Node address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
