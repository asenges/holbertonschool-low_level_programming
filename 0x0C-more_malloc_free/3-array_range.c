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
	int k;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	k = 0;
	while (min <= max)
	{
		arr[k] = min;
		min++;
		k++;
	}

	return (arr);
}

