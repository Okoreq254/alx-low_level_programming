#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees memory of a list
 * @head: head pointer of singly linked list
 *
 * Return: No Return
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
