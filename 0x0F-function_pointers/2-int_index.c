#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
