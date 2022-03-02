#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * Return: char pointer
 * @width: int
 * @height: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = (int **)malloc(sizeof(int *) * height);
	if (a != NULL)
	{
		for (i = 0; i < height; i++)
		{
			a[i] = (int *)malloc(sizeof(int) * width);
			if (a[i] == NULL)
			{
				for (j = 0; j < width; j++)
				{
					free(a[j]);
				}
				free(a);
				return (NULL);
			}
		}

		i = 0;
		j = 0;
		while (a[i])
		{
			while (a[i][j])
			{
				a[i][j] = 0;
				j++;
			}
			i++;
		}
	}
	return (a);
}
