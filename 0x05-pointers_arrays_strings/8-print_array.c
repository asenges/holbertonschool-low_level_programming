#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print an array
 * Return: void
 * @a: a pointer
 * @n: param n
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
