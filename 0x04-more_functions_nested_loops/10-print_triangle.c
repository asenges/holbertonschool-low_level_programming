#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - function to print a triangle
 * Return: void
 * @size: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{

			for (j = size; j >= 1; j--)
				if (i < j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}


			_putchar('\n');
		}
	}
}
