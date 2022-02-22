#include <stdio.h>
#include <stdlib.h>
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
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j != 7)
			{
				_putchar(a[i][j]);
			}
			else
			{
				_putchar(a[i][j]);
				_putchar(10);
			}
		}
	}
}
