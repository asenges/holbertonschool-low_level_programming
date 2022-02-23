#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function
 * Return: char pointer
 * @s: char pointert
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

