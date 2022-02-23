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
	int last = strlen(s) - 1;
	s += last;

	if (*s != '\n')
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
