#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: columns
 *@height: rows
 *
 *Return: Double Pointer
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int x, y, z, fr;

	fr = 0;
	if (width <= 0 || height <= 0)
	return (0);

	s = malloc(height * sizeof(int *));
	if (s == 0)
	return (0);
	for (x = 0; x < height; x++)
	{
	*(s + x) = malloc(width * sizeof(int));
	if (*(s + x) == 0)
	{
	fr = 1;
	break;
	}
	for (y = 0; y < width; y++)
	{
	s[x][y] = 0;
	}
	}
	if (fr == 1)
	{
	for (z = 0; z <= x; z++)
	{
	free(*(s + z));
	}
	free(s);
	}
	return (s);
}
