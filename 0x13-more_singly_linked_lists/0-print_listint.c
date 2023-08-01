#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints  singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%i\n", h->n);
		size++;
	}

	return (size);
}
