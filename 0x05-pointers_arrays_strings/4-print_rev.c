#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - function to print a str in reverse
 * Return: void
 * @s: s pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
