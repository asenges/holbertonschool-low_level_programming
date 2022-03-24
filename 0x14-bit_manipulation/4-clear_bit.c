#include "main.h"
#include <stddef.h>
/**
 * clear_bit - clear_bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
