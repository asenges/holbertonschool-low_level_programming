#include <stdio.h>
#include "main.h"

/**
 * swap_int - function to swap int
 * Return: void
 * @a: int pointer
 * @b: int pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

