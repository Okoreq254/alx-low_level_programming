#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	listint_t *tmp = *head;
	int n = tmp->n;

	*head = (*head)->next;
	free(tmp);

	return (n);
}
