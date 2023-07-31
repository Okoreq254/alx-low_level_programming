#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int prev = 1, curr = 2, next;
	int count;

	printf("%li, %li, ", prev, curr);

	for (count = 3; count <= 50; count++)
	{
		next = prev + curr;
		printf("%li", next);

		if (count != 50)
			printf(", ");
		else
			printf("\n");

		prev = curr;
		curr = next;
	}

	return (0);
}
