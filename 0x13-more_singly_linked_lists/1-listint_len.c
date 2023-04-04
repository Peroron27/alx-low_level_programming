/*
 * file: 1-listint_len.c
 * author:Peter Aniefiok
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the numbers of element of the link lists
 * linked list of type listint_t to traverse
 *
 * Return: The number of elements in the listint_t lists.
 */

size_t listint_len(const listint_t *h);

{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
