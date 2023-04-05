/**
 * file:5-free_listint2.c
 * author:Peter Aniefiok
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a list
 * @head: Address of the first  node of the list
 * Return:0
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
