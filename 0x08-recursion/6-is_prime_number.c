#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * prime_ - function
 * Return: int
 * @n: int
 * @help: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */

int prime_(int n, int help)
{
	if (help == 1)
		return (1);
	else if ((n % help) == 0)
		return (0);
	else
		return (prime_(n, help - 1));
}


/**
 * is_prime_number - function
 * Return: int
 * @n: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 23, 2022
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime_(n, n - 1));
	else
		return (0);
}

