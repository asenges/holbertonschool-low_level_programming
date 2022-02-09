#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_most_numbers - function to print numbers most numbers from 0-9
 * Return: void
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
