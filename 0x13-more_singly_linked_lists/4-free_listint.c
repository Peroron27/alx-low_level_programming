/*
 * file: 4-free_listint.c
 * author: Peter Aniefiok
 */

#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a list
 * @head:Address of the first node of the list
 * Return:0
 */

void free_listint(listint_t *head)
{
	listint_t *tp, *tp2;

	tp = head;
	while (tp != NULL)
	{
		tp2 = tp->next;
		free(tp);
		tp = tp2;
	}
}
