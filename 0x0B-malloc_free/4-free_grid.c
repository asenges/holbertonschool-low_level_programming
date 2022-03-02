#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - function
 * Return: char pointer
 * @grid: int
 * @height: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 2, 2022
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
