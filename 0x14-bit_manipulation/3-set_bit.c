#include "main.h"
#include <stddef.h>
/**
 * set_bit - set_bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
