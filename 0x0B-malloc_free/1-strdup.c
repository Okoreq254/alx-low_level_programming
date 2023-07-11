#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *	has a copy of the string given as a parameter.
 *@str: string to copy
 *
 *Return: Pointer
 */
char *_strdup(char *str)
{
	int l, j;
	char *s;

	if (str == NULL)
	return (0);

	l = 0;
	while (*(str + l))
	l++;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
	return (0);

	for (j = 0; j <= l; j++)
	{
	*(s + j) = *(str + j);
	}
	return (s);
}
