#include <stdio.h>
#include "function_pointers.h"
#include <string.h>

/**
 * int_index - function
 * Return: void
 * @array: int array
 * @size: size_t
 * @cmp: int func int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	size_t func_result;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			func_result = cmp(array[i]);
			if (func_result != 0)
				return i;
		}
		return (-1);
	}
	return (-1);
}

