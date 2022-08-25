#include "search_algos.h"
/**
 * binary_search - binary search
 * Return: int
 * @array: int ptr
 * @size: size_t
 * @value: int
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = 0, h = 0, i = 0;

	if (array == NULL)
		return (-1);

	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
			{
				printf("%d", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		printf("\n");

		h = (l + r) / 2;

		if (array[h] == value)
			return (h);

		else if (array[h] > value)
			r = h - 1;

		else if (array[h] < value)
			l = h + 1;
	}
	return (-1);
}
