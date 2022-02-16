#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - function to reverse array
 * Return: void
 * @a: int ptr
 * @n: int ptr
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

void reverse_array(int *a, int n)
{
	int i, j, k;
	int numbers[1024];

	for (i = 0; i < n; i++)
	{
		numbers[i] = a[i];
	}

	k = 0;
	for (j = n - 1; j >= 0; j--)
	{
		a[k] = numbers[j];
		k++;
	}
}
