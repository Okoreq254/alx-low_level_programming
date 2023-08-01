#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees memory of a list
 * @head: pointer to head of singly linked list
 *
 * Return: No Return
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	listint_t *current;

	for (; *head != NULL;)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
