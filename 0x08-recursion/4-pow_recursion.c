#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _pow_recursion - function
 * Return: int
 * @x: int
 * @y: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

int _pow_recursion(int x, int y)
{
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return 1;
}

