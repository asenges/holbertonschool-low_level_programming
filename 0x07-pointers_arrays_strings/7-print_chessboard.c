#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_chessboard - function
 * Return: char
 * @a: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
				printf("%s", a[j]);
		}
		printf("\n");
	}
}
