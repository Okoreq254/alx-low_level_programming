#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: array of type int
 *@size: size of array
 *@cmp: function with argument int and no return
 *
 *Return: No element matches -1, if size <=0 -1
 *	else index of first element cmp func does not rtrn 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp && size > 0)
	for (x = 0; x < size; x++)
	if (cmp(array[x]))
	return (x);

	return (-1);
}
