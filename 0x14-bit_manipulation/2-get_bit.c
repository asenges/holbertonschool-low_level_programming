#include "main.h"
#include <stddef.h>
/**
 * get_bit - get_bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 33)
		return (-1);

	n = n >> index;
	if ((n & 1) == 0)
		return (0);
	else
		return (1);
}
