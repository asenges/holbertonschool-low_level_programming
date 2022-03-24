#include "main.h"
#include <stddef.h>
/**
 * flip_bits - flip_bits
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int res;

	res = n ^ m;
	i = 0;
	while (res)
	{
		if ((res & 1) == 1)
			i++;
		res = res >> 1;
	}
	return (i);
}
