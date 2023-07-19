#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *@array: array of type int
 *@size: size of array
 *@action: function with argument int and no return
 *
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (action != 0 && size >= 1 && array != 0)
	{
	for (y = 0; y < size; y++)
	action(array[y]);
	}
}
