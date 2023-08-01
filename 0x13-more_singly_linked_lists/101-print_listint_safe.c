#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list (can print lists with loop)
 * @head: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	unsigned int count = 0;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
			break;
		}
	}

	return (count);
}
