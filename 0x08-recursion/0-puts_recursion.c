#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - function
 * Return: char pointer
 * @s: char pointert
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
