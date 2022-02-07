#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _abs - function to check if number is absolute
 * Return: int
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int _abs(int n)
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



