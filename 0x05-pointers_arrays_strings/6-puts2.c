#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - function to print a str in reverse
 * Return: void
 * @str: s pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	i = 0;
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
}
