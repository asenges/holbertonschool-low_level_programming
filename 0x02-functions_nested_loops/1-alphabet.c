#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - funtion to call _putchar
 * Return: 0
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}

