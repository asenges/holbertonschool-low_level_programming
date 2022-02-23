#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * sqrt_ - function
 * Return: int
 * @n: int
 * @help: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

int sqrt_(int n, int help)
{
	if (help * help == n)
	{
		return (help);
	}

	if (help * help > n)
	{
		return (-1);
	}

	return (sqrt_(n, help + 1));
}


/**
 * _sqrt_recursion - function
 * Return: int
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */
int _sqrt_recursion(int n)
{
	return (sqrt_(n, 1));
}

