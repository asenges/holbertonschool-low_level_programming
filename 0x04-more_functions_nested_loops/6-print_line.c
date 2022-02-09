#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - function to print a line
 * Return: void
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
