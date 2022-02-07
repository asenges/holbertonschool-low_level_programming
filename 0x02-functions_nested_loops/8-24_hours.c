#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * jack_bauer - function to print all hours and minutes of a day
 * Return: void
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

void jack_bauer(void)
{

int i, j;

i = 0;
while (i < 24)
{
	j = 0;
	while (j < 60)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar('\n');
		j++;
	}
	i++;

}

}

