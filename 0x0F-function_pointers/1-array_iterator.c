#include <stdio.h>
#include "function_pointers.h"
#include <string.h>

/**
 * array_iterator - function
 * Return: void
 * @array: int array
 * @size: size_t
 * @action: void func int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

