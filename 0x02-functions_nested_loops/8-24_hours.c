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

int h;
int m;

for (h = 0; h < 24; h++)
{
	if (h <= 9)
	{
		for (m = 0; m < 60; m++)
		{
			if (m <= 9)
			{
				_putchar('0');
				_putchar(h + '0');
				_putchar(':');
				_putchar('0');
				_putchar(m + '0');
				_putchar('\n');
			}
			else if (m >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar('\n');
			}
		}
	}
	else if (h >= 10)
	{
		for (m = 0; m < 60; m++)
		{
			if (m <= 9)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar('0');
				_putchar(m + '0');
				_putchar('\n');
			}
			else if (m >= 10)
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
				_putchar(':');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				_putchar('\n');
			}
		}
	}
}

}

