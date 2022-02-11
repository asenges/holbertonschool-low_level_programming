#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts_half - function to print a half of a string
 * Return: void
 * @str: s pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = (len / 2); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
