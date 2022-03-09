#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * Return: void
 * @name: struct pointer
 * @f: char
 *
 * Description:
 * Author: Alex Senges
 * Date: Mar 09, 2022
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}

