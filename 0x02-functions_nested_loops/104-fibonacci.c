#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int prev = 1, curr = 2, next;
	unsigned long int limit = 96;
	unsigned long int i;

	printf("%lu, %lu, ", prev, curr);

	for (i = 3; i <= limit; i++)
	{
		next = prev + curr;
		prev = curr;
		curr = next;

		if (curr >= 100)
			printf("%lu", curr);
		else
			printf("0%lu", curr);

		if (i != limit)
			printf(", ");
	}

	putchar('\n');
	return (0);
}
