#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds new node at the beginning of singly linked list
 * @head: pointer to head of singly linked list
 * @n: number to add as new node in the list
 *
 * Return: address of new element, or NULL failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
