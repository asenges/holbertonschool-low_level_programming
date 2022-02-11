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
	int len;

	len = strlen(s);

	for (; (len - 1) >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
