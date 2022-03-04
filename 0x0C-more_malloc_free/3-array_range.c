#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - function
 * Return: int
 * @min: int
 * @max: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

int *array_range(int min, int max)
{
	int i, k;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min) + 2);
	if (arr == NULL)
		return (NULL);

	k = 0;
	for (i = min; i <= max; i++)
	{
		arr[k] = i;
		k++;
	}

	return (arr);
}
