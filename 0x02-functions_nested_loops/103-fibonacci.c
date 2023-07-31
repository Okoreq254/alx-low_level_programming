#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int prev = 1, curr = 2, next, sum = 2;

	while (curr <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;

		if (curr % 2 == 0)
		{
			sum += curr;
		}
	}

	printf("%li\n", sum);
	return (0);
}
