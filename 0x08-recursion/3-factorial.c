#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * factorial - function
 * Return: int
 * @n: n
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}

