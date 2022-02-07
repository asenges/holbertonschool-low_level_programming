#include <stdio.h>
#include "main.h"

/**
 * print_sign - funtion to print sign of a number
 * Return: int
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}

