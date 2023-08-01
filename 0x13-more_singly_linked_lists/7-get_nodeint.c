#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of singly linked list
 * @index: index of the node (starting from 0)
 *
 * Return: pointer to the nth node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
