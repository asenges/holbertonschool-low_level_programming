#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - function to print a square
 * Return: void
 * @size: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
}
