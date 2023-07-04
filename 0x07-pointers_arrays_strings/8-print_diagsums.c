#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - adds the diagonal values
 *
 * @a: pointer to array
 *
 * @size: int
 *
 * Return: size of two sides)
 *
 */

void print_diagsums(int *a, int size)
{
	int counter1, counter2, add1, add2;

	add1 = 0;
	add2 = 0;

	for (counter1 = 0; counter1 < size; counter1++)
	{
		add1 += a[(size + 1) * counter1];
	}
	for (counter2 = 0; counter2 < size; counter2++)
	{
		add2 += a[(size - 1) * (counter2 + 1)];
	}
	printf("%d, %d\n, add1, add2);
}
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - adds the diagonal values
 *
 * @a: pointer to array
 *
 * @size: int
 *
 * Return: size of two sides)
 *
 */

void print_diagsums(int *a, int size)
{
	int counter1, counter2, add1, add2;

	add1 = 0;
	add2 = 0;

	for (counter1 = 0; counter1 < size; counter1++)
	{
		add1 += a[(size + 1) * counter1];
	}
	for (counter2 = 0; counter2 < size; counter2++)
	{
		add2 += a[(size - 1) * (counter2 + 1)];
	}
	printf("%d, %d\n, add1, add2);
}

