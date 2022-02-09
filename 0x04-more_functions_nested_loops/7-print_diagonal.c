#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - function to print a line
 * Return: void
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
	
			_putchar('\\');
			_putchar('\n');
		}
	}
}
