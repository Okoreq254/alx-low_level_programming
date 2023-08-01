#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list
 * @head: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp, *tmp2;
	unsigned int count = 0;

	tmp = head;
	if (tmp == NULL)
		return (0);

	while (tmp != NULL)
	{
		tmp2 = tmp;
		tmp = tmp->next;

		count++;

		printf("[%p] %d\n", (void *)tmp2, tmp2->n);

		if (tmp2 <= tmp)
		{
			if (tmp != NULL)
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}
	}

	return (count);
}
