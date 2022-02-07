#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - funtion to call _putchar x10
 * Return: void
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

void print_alphabet_x10(void)
{
	char c;
	char i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a' ; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

	}

}


