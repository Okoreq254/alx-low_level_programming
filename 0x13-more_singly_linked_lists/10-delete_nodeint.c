#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a
 * given index in a listint_t linked list.
 * @head: pointer to pointer to head of singly linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		count++;
	}
	return (-1);
}
