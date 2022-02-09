#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - function to print more numbers
 * Return: void
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j / 10) != 0)
			_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
